#include <stdio.h>
int main()
{
    int i, j, n, k;
    scanf("%d %d", &n, &k);
    int result[n];
    for (i = 2, j = 1; i <= n, j <= n / 2; i += 2, j++)
    {
        {
            result[j] = i;
            printf("%d ", i);
        }
    }
    for (i = 1, j = (n / 2) + 1; i <= n, j <= n; i += 2, j++)
    {
        {
            result[j] = i;
            printf("%d ", i);
        }
    }

    for (i = 1; i <= n; i++)
    {
        if (i == k)
        {
            printf("\nThe %dth element in this sequence is %d ", i, result[i]);
        }
    }

    return 0;
}
