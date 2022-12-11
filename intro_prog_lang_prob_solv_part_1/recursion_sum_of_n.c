#include <stdio.h>
int solve(int i, int n)
{
    int s;
    if (i > n)
        return 0;
    s = solve(i + 1, n);
    return s + i;
}
int main()
{
    int n, s;
    scanf("%d", &n);
    s = solve(1, n);
    printf("%d\n", s);

    return 0;
}