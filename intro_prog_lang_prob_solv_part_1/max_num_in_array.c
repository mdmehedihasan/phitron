// max in int value in array
#include <stdio.h>

int main()
{
    int arr[] = {6, 5, 7, 4, 11, 3}, m1, i;
    m1 = arr[0];
    for (i = 0; i < 6; i++)
    {
        if (arr[i] > m1)
        {
            m1 = arr[i];
        }
    }

    printf("%d\n", m1);

    return 0;
}