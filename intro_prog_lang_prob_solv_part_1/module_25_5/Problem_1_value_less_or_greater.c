#include <stdio.h>
int duplicate(int a)
{
    int i, count = 0, k, arr[100];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < a; i++)
    {
        if (arr[i] > k || arr[i] < k)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n, res;
    scanf("%d", &n);
    res = duplicate(n);
    printf("%d", res);
    return 0;
}