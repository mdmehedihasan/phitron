#include <stdio.h>
int odd_even(int arr[], int a)
{
    int i, sum = 0;

    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            sum = sum + i + arr[i];
        }
    }

    for (i = 1; i <= a; i++)
    {
        if (i % 2 != 0 && arr[i] % 2 != 0)
        {
            sum = sum + i + arr[i];
        }
    }
    return sum;
}

int main()
{
    int n, i, arr[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = odd_even(arr, n);
    printf("%d", res);

    return 0;
}