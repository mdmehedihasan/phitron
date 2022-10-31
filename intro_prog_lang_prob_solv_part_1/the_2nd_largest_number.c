// the second large number
#include <stdio.h>
int main()
{
    int n, arr[20], m1, m2, i;
    printf("How much number you will take:");
    scanf("%d", &n);
    printf("Input %d numbers in array:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    m1 = arr[0];
    m2 = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else
        {
            if (arr[i] > m2)
            {
                m2 = arr[i];
            }
        }
    }
    printf(" The fist largest: %d\n The second largeesstt: %d", m1, m2);

    return 0;
}