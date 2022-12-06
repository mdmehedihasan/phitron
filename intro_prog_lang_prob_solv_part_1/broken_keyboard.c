#include <stdio.h>
#include <string.h>

char redundant(char ch[], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%c", ch[i]);
            }
        }
        else
        {
            printf("%c", ch[i]);
        }
    }
    printf("\n");
}

int main()
{
    char ch[100];
    int len, i, j;
    scanf("%s", ch);
    len = strlen(ch);

    redundant(ch, len);

    return 0;
}
