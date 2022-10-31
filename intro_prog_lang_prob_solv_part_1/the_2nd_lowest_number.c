#include <stdio.h>
int main()
{
    int arr[] = {6, 7, 5, 12, 11}, max, min, i;
    min = arr[0];
    for (i = 0; i < 5; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    arr[0] = min;

    return 0;
}