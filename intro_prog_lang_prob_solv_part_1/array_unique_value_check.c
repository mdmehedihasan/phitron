#include <stdio.h>
int main()
{
    int n, i, arr[100], m, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    m = arr[0];
    for (i = 1; i < n; i++)
    {
        if (m == arr[i])
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}