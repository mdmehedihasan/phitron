#include <stdio.h>
int main()
{
    int arr[100], n, i, j, q, v, ind;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d%d", &ind, &v);
        arr[ind] = arr[ind] + v;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}