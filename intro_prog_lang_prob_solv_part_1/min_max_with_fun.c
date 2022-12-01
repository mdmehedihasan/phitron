#include <stdio.h>
void find_max_min(int n, int arr[], int *p, int *q)
{
    *p = arr[0];
    *q = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > *p)
            *p = arr[i];
        if (arr[i] < *q)
            *q = arr[i];
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 3, 2, 6, 7};
    int n = 8, maxx, minn;
    find_max_min(n, arr, &maxx, &minn);
    // printf("%d", sizeof(arr) / sizeof(int));
    printf("%d %d", maxx, minn);
    return 0;
}