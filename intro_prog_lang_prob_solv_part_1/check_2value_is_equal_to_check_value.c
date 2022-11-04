// not solved yet

#include <stdio.h>
int main()
{
    int i, j, n, arr[100], count = 0, chval, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &chval);

    for (i = 0; i < n; i++)
    {
        m = arr[i];
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (m + arr[i] == chval)
                {
                    count++;
                    break;
                }
            }
        }
    }

    if (count != 0)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}