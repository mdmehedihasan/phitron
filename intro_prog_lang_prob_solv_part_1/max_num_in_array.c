//
#include <stdio.h>

int main()
{
    int arr[] = {6, 5, 7, 4, 11, 3}, m1, m2, i;
    m1 = arr[0];
    for (i = 0; i < 6; i++)
    {
        if (m1 < arr[i + 1])
        {
            m1 = arr[i + 1];
        }
    }

    printf("%d\n", m1);

    return 0;
}