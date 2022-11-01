#include <stdio.h>
int main()
{
    long long int arr[2000001], n, x, i;

    scanf("%lld", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &x);
        arr[x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            printf("%lld", i);
    }
}