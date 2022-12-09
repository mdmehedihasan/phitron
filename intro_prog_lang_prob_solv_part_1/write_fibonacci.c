#include <stdio.h>
int main()
{
    int i, first = 0, second = 1, n, next, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", first);
        if (i < n - 1)
        {
            printf(", ");
        }
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}