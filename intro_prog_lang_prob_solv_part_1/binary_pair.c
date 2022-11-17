#include <stdio.h>
int main()
{
    char first;
    int t, n, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int count = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        first = str[0];
        for (j = 0; j < n - 1; j++)
        {
            if (first != str[j + 1])
            {
                count++;
                first = str[j + 1];
            }
        }
        printf("%d\n", count);
    }
    return 0;
}