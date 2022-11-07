/*
Write a C program to take a positive integer N and print the pattern as shown below
For N=4, the pattern should be
5
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/
#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        for (k = 0; k < i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}