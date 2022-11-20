#include <stdio.h>

int gcd(int x, int y)
{
    int i;
    for (i = x; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a = gcd(8, 4);
    printf("%d\n", a);

    return 1;
}
