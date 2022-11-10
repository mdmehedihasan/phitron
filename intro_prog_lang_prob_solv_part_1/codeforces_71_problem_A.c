#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, len;
    scanf("%d", &n);
    char input[100];

    for (i = 0; i < n; i++)
    {
        scanf("%s", input);
        len = strlen(input);

        if (len > 10)
        {
            printf("%c%d%c \n", input[0], len - 2, input[len - 1]);
        }
        else
        {
            puts(input);
            printf("\n");
        }
    }

    return 0;
}