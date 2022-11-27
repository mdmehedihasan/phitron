#include <stdio.h>
int fact(int a)
{
    int tot = 1, i;
    for (i = 1; i <= a; i++)
    {
        tot *= i;
    }
    return tot;
}
int main()
{
    int a, res;
    scanf("%d", &a);
    res = fact(a);
    printf("%d", res);

    return 0;
}