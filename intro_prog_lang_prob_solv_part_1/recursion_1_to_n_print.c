#include <stdio.h>
void solve(int i, int n)
{
    if (n < i)
    {
        return;
    }

    solve(i, n - 1);
    printf("%d ", n);
}

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    solve(i, n);

    return 0;
}