#include <stdio.h>
int main()
{
    int a = 7, *pi;
    double b = 8.17, *pd;

    pi = &a;
    pd = (double *)pi;

    printf("%d %lf \n", a, b);
    printf("%p %p \n", pi, pd);
}