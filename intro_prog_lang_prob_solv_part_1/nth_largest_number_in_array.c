
// nth largest number in an array
#include <stdio.h>
int main()
{
    int n, i, j, max;
    scanf("%d", &n);
    int input[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    max = input[0]; // assume the largest value in the first index
    for (i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }
    // got the max value
    // now declare the new array with the size of max+1
    int arr[max + 1];
    for (i = 0; i <= max; i++)
    {
        arr[i] = 0; // make all the index with the value of 0
    }

    // now all the input value in the input array put int the new array with 1
    for (i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }
    // assuem the value of count is 0 and from the last 3rd larst number we find
    int count = 0;
    for (i = max; i >= 1; i--)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        // if we got the last 3 large to small then we find the last 3rd greatest number
        if (count == 3)
        {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}
