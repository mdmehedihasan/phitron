#include <stdio.h>

int is_even(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (is_even(n))
    {
        printf("Even\n");
    }
    else
        printf("Odd");
    return 0;
}