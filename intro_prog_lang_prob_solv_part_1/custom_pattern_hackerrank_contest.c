#include <stdio.h>
int main()
{
    int t, i, j, k;
    char a;
    scanf("%d %c", &t, &a);
    for (i = 1; i <= t; i++)
    {
        for (j = 1; j <= t - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= t; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}
