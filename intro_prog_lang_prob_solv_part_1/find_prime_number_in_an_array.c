/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . Now count the number of prime numbers from this array and print them.
In the sample output the first line will contain count of prime numbers and second line will contain the prime
numbers.
*/
#include <stdio.h>
int main()
{
    int n, arr[100], i, j, trac = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // for how many number of prime number in an array
    for (i = 1; i <= n; i++)
    {
        int count = 0;
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            trac += 1;
        }
    }
    printf("%d\n", trac);

    // the index that is prime number
    for (i = 1; i <= n; i++)
    {
        int count = 0;
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}