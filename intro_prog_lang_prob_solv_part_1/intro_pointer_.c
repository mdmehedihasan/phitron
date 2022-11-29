#include <stdio.h>
int main()
{
    int a = 123;
    int *p;
    p = &a;
    *p = 4;
    printf("%d", a);

    return 0;
}