#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int i, n, len, rest;
    scanf("%s %d", word, &n);
    len = strlen(word);
    for (i = 0; i < len; i++)
    {
        word[i] = word[i] + n;
        if (word[i] > 122)
        {
            rest = word[i] - 122;
            word[i] = 96 + rest;
        }
        printf("%c", word[i]);
    }

    return 0;
}
