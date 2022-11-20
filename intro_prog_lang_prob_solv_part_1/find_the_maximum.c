#include <stdio.h>
int main()
{
    int n, i, j, k, l, temp, max = 0, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
        }
    }

    for (k = 1; k < n; k++)
    {
        for (l = i + 1; l <= n; l++)
        {
            sum = arr[k] + arr[l];
            if (sum % 2 == 0 && sum >= max)
            {
                max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}