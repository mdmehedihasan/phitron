#include <stdio.h>
int add_them(int a, int num[])
{
    int i, surtotal = 0;
    for (i = 0; i < a; i++)
    {
        surtotal += num[i];
    }
    return surtotal;
}
int main()
{
    int num[] = {2, 3, 5, 6, 7, 8};
    int total = add_them(6, num);
    printf("%d", total);
    return 0;
}