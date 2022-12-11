#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str), largestElement = 26, i, j;
    int freq[largestElement + 1];

    for (i = 0; i <= largestElement; i++)
    {
        freq[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }

    for (i = 1; i <= 26; i++)
    {
        if (freq[i] > 1)
        {
            for (j = 0; j < freq[i]; j++)
            {
                printf("%c", i + 96);
            }
        }
        else if (freq[i] == 1)
        {
            printf("%c", i + 96);
        }
    }

    return 0;
}
