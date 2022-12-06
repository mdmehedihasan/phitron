#include <stdio.h>
int prime_numbers(int nums[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 2; j < *(nums + i); j++)
        {
            if (*(nums + i) % j == 0)
            {
                count++;
            }
        }
    }
    return count;
}
float even_average(int nums[], int n)
{
    int sum = 0, count = 0, i, res;
    for (i = 0; i < n; i++)
    {
        if (*(nums + i) % 2 == 0)
        {
            sum = sum + *(nums + i);
            count++;
        }
    }
    if (count == 0)
    {
        count = 1;
    }
    res = sum / count;
    return res;
}
int main()
{
    int n, i, prime;
    float avg;
    int nums[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    prime = prime_numbers(nums, n);
    avg = even_average(nums, n);
    printf("Prime numbers: %d\n", prime);
    printf("Average of all even integers: %.2f\n", avg);
    return 0;
}
