#include <stdio.h>
int gcd(int a, int b)
{
    int i, resl;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            resl = i;
        }
    }
    return resl;
}

int lcm(int a, int b)
{
    int res2;
    res2 = (a * b) / gcd(a, b);
    return res2;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = gcd(a, b);
    printf("%d\n", res);
    int res2 = lcm(a, b);
    printf("%d", res2);
    return 0;
}