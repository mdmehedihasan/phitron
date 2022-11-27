#include <stdio.h>
int median(int arr[], int n)
{
    int i, j, temp, d, a, b, median;
    float res;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < (n - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        d = arr[(n / 2) - 1] + arr[(n / 2)];
        res = d / 2.0;
        printf("Median:%0.1f", res);
    }
    else
    {
        d = arr[(n / 2)];
        printf("Median:%d", d);
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    median(arr, n);
    // printf("%d",median(arr,n));

    return 0;
}
