#include <stdio.h>
int main()
{
    int n, i, a;
    scanf("%d", &n);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("Sum -> %d", sum);
    return 0;
}