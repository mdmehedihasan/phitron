/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N as input and tell if the sum of odd values is even or not.
If the sum of odd values is even print YES otherwise NO.
*/
#include <stdio.h>
int main()
{
    int arr[100], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int odd_sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_sum += arr[i];
        }
    }
    if (odd_sum % 2 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}