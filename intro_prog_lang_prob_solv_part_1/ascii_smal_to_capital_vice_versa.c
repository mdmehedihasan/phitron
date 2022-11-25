#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int i, len;
    scanf("%s", word);
    len = strlen(word);
    for (i = 0; i <= len; i++)
    {
        if (word[i] >= 97)
        {
            printf("%c", word[i] - 32);
        }
        else
            printf("%c", word[i] + 32);
    }

    return 0;
}