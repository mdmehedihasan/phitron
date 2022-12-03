#include <stdio.h>
#include <math.h>

int is_beautiful(int arr[], int num)
{
    int ld, i;
    float range;
    range = ceill(num / 2.0);

    int count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (i = 0; i < num; i++)
    {
        while (*(arr + i) > 0)
        {
            ld = *(arr + i) % 10;
            count_digit[ld]++;
            *(arr + i) /= 10;
        }
    }

    if (count_digit[7] >= range)
    {
        printf("Beautiful\n");
    }
    else
        printf("Ugly\n");
}

int main()
{
    int n, arr[100], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    is_beautiful(arr, n);
    return 0;
}