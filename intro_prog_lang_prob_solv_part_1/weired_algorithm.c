// cses problem first
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            printf("%d ", n);
        }
        else
        {
            if (n % 2 != 0)
            {
                n = (n * 3) + 1;
                printf("%d ", n);
            }
        }
    }

    return 0;
}