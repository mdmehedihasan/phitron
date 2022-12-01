#include <stdio.h>
int sum_of_digit(int a)
{
    int sod = 0;
    while (a > 0)
    {
        sod += a % 10;
        a = a / 10;
    }
    return sod;
}
int is_prime(int a)
{
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (is_prime(sum_of_digit(n)) == 1)
        printf("Mehedi's Number Prime\n");
    else
        printf("No\n");
    return 0;
}