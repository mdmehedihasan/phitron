#include <stdio.h>
int main()
{
    int arr[] = {6, 7, 5, 4, 12, 2, 11, 1}, m1, m2, i;
    m1 = arr[0];
    m2 = arr[1];

    for (i = 0; i < 8; i++)
    {

        if (arr[i] < m1)
        {
            m2 = m1;
            m1 = arr[i];
        }

        // if (arr[i] < m2)
        // {
        //     m2 = arr[i];
        // }
    }
    printf("%d\n", m1);
    printf("%d", m2);

    return 0;
}