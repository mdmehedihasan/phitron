#include <stdio.h>

int main()
{

    int t, i, n, s, j, arr[100], k;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &s);
        int count = 0;
        for (k = 1; k <= n; k++)
        {
            if (arr[k] == s)
            {
                printf("Case %d: %d\n", i, k);
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}
