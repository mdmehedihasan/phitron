#include <stdio.h>
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a is: %d\nb is: %d", x, y);
}
int main()
{
    int a = 5, b = 10, temp;
    swap(a, b);
    return 0;
}