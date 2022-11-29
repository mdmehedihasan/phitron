#include <stdio.h>
int main()
{
    int a = 12, b = 5;
    int *p, **q;
    p = &a;
    q = &p;
    **q = 200;

    printf("%d \n", *p);
    printf("%d \n", **q);
    return 0;
}