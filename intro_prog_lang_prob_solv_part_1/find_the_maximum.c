#include <stdio.h>
int main()
{
    int n, i, j, temp, result;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

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
    }

    for (i = 1; i <= n; i++)
    {
        result = arr[n - 1] + arr[n - (i + 1)];
        if (result % 2 == 0)
        {
            printf("%d", result);
            break;
        }
    }

    return 0;
}