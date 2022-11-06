/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N as input and sort the array in ascending order. It is guaranteed that the input array will contain distinct
integers.
Note – It is possible to sort an array without any sorting algorithm. Hence for this problem you can’t use any
sorting algorithm.
*/
#include <stdio.h>
int main()
{
    int n, input[100], i, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    max = input[0];
    for (i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    int arr[max + 1];
    for (i = 0; i <= max; i++)
    {
        arr[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }

    for (i = 1; i <= max; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}