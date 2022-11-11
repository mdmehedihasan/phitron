// bubble  sorting
#include <stdio.h>
int main()
{
    int n = 11, i, j, temp;
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}