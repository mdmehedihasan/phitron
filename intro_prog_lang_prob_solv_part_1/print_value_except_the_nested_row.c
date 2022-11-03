#include <stdio.h>
int main()
{
    int n, i, j, arr[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d-", i);
        for (j = 1; j <= n; j++)
            if (j == i)
            {
                continue;
            }
            else
            {
                printf("%d ", j);
            }
        printf("\n");
    }

    return 0;
}