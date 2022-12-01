#include <stdio.h>
int s(int n)
{
    if (n == 1)
        return 1;
    else
        return s(n - 1) + n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int summ = s(n);
    printf("%d\n", summ);

    return 0;
}