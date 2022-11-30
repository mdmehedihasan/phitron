#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 10, temp;
    swap(&a, &b);
    printf("%d %d", a, b);

    // printf("%d %d", a, b);

    return 0;
}