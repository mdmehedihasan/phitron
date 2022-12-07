#include <stdio.h>
int isPrime(int num[], int n)
{
    int i, prime = 0, count, j;
    for (i = 0; i < n; i++)
    {
        count = 0;
        if (*(num + i) == 1)
        {
            count = 1;
        }
        else
        {
            for (j = 2; j < *(num + i); j++)
            {
                count = 0;
                if (*(num + i) % j == 0)
                {
                    count = 1;
                    break;
                }
            }
        }

        if (count == 0)
        {
            prime++;
        }
    }
    return prime;
}
float totalEven(int even[], int n)
{
    int i, j, count = 0, sum = 0;
    double avg;

    for (i = 0; i < n; i++)
    {
        if (*(even + i) % 2 == 0)
        {
            count++;
            sum += *(even + i);
        }
    }
    avg = sum / count;
    return (avg);
}
int main()
{
    int n, num[100], i, prime;
    float even;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    prime = isPrime(num, n);
    printf("Prime numbers:%d\n", prime);
    even = totalEven(num, n);
    printf("Average of all even integers:%0.2lf", even);
}