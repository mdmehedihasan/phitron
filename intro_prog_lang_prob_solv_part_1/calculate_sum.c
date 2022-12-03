#include <stdio.h>
int main()
{
    int n, i, num = 0, arr[100], sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i + 3] = (i + 3) * (-1);
            sum = sum + i;
        }
        else if (arr[i] != 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}