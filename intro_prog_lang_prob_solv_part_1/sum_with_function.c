#include <stdio.h>
int max_found(int a, int b, int c);

int main()
{
    int total = max_found(5, 4, 1);
    printf("%d", total);

    return 0;
}

int max_found(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
        return c;
}
