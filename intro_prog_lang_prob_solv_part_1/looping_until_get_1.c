#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    while (n > 1)
    {
        printf("%d\n", n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    printf("%d", n);

    return 0;
}