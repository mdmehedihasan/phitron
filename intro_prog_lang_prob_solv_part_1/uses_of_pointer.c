#include <stdio.h>
void func(int x, int y, int *p, int *q)
{
    // if (x > y)
    // {
    //     *p = x;
    //     *q = y;
    // }
    // else
    // {
    //     *p = y;
    //     *q = x;
    // }

    // another way to print that
    *p = x > y ? x : y;
    *q = x < y ? x : y;
}
int main()
{
    int a = 5, b = 12;
    int large, small;
    func(a, b, &large, &small);
    printf("%d %d", large, small);
    return 0;
}