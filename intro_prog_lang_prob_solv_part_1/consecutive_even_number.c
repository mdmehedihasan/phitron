#include <stdio.h>
int make_add()
{
    int i, x, res, n, t, j, count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        count = 0;
        {
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
    }
}
int main()
{

    make_add();
    return 0;
}