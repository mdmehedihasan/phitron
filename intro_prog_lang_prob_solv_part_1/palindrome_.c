#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    int i, l, n, j;
    scanf("%d", &n);

    for (j = 0; j < n; j++)
    {
        scanf("%s", a);
        l = strlen(a);
        for (i = 0; i < l / 2; i++)
        {
            if (a[i] != a[l - 1 - i])
            {
                printf("Case #1: Not Palindrome\n");
                break;
            }
        }
        if (i == l / 2)
        {
            if (l <= 7)
                printf("Case #3: %s\n", a);
            else
            {
                printf("Case #2: %c%d%c\n", a[0], l - 2, a[l - 1]);
            }
        }
    }

    return 0;
}