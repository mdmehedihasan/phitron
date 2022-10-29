// array concept
#include <stdio.h>
int main()
{
    int arr[10], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf(" %dth number is %d\n", i, arr[i]);
    }
    return 0;
}