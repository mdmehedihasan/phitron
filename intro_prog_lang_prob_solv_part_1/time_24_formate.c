#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d%d", &n, &m);

    while (n % 24 != m + 1)
    {
        printf("%d ", n % 24);
        n++;
    }

    return 0;
}