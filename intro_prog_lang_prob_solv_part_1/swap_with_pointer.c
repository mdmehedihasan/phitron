#include <stdio.h>
int *change_array(int arr[], int n)
{
    int q, i, l, r, temp;
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &l, &r);
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
    return arr;
}
int main()
{
    int n, i;
    int *p;
    scanf("%d", &n);
    int inp[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &inp[i]);
    }
    p = change_array(inp, n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", p[i]);
    }

    return 0;
}