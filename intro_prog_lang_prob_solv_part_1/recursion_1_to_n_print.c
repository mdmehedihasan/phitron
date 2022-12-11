#include <stdio.h>
void solve(int i, int n)
{
    if (n < i)
    {
        return;
    }
    printf("%d ", n);
    solve(i, n - 1);
}

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    solve(i, n);

    return 0;
}