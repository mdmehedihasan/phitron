#include <stdio.h>
int main()
{
    int t, i, arr[100], j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= t; i++)
    {
        int count = 0;
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
