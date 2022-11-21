#include <stdio.h>
int isprime(int p)
{
    int i;
    if (p == 1)
    {
        return 0;
    }
    else if (p == 2)
    {
        return 1;
    }
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int r = 1;
    int p = isprime(r);
    if (p == 1)
    {
        printf("%d is prime", r);
    }
    else
        printf("%d is not prime", r);

    return 0;
}
