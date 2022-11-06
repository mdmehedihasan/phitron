/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . And next line will contain k . Now find the k-th smallest element from the array.
*/
#include <stdio.h>
int main()
{
    int n, input[100], arr[100], i, max, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    scanf("%d", &k);
    max = input[0];
    for (i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }
    arr[max + 1];
    for (i = 0; i <= max; i++)
    {
        arr[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }
    int count = 0;
    for (i = 0; i <= max; i++)
    {
        if (arr[i] == 1)
        {
            count += 1;
        }
        if (count == k)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}