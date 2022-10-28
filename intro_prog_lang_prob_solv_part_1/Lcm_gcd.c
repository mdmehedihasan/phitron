#include <stdio.h>
int main()
{
    int num1, num2, m, n, swap, w, lcm, gcd;
    scanf("%d %d", &num1, &num2);
    m = num1, n = num2;
    if (m < n)
    {
        swap = m;
        m = n;
        n = swap;
    }
    while (n != 0)
    {
        w = m % n;
        m = n;
        n = w;
    }
    gcd = m;
    lcm = (num1 * num2) / gcd;
    printf("The LCM of %d and %d is %d.", num1, num2, lcm);

    return 0;
}
