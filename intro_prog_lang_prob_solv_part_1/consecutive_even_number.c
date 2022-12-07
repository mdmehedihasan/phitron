#include <stdio.h>
int make_add()
{
    int i, x, res, n, t, j, count;
    scanf("%d", &n);
    count = 0;
    j = 0;
    while (count != 4)
    {
        x = (n - 12) / 4;
        res = x + j;
        count++;
        j += 2;
        printf("%d ", res);
    }
    printf("\n");
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        make_add();
    }

    return 0;
}