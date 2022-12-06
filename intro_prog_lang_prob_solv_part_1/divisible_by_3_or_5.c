#include <stdio.h>
int div_by_3(int a)
{
    if (a % 3 == 0)
    {
        return 1;
    }
    else
        return -1;
}

int div_by_5(int b)
{
    if (b % 5 == 0)
    {
        return 1;
    }
    else
        return -1;
}

int main()
{
    int t, i, count = 0;
    scanf("%d", &t);
    int inp[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &inp[i]);
    }
    for (i = 0; i < t; i++)
    {
        if (div_by_3(inp[i]) == 1 || div_by_5(inp[i]) == 1)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("%d", count);
    }
    else
        printf("-1");
}