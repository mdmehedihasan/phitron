#include <stdio.h>
#include <string.h>
int tocal(char str[], int len, char a)
{
    int i;
    for (i = 0; i <= len; i++)
    {
        if (str[i] == a)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    int n = 100, len, count = 0, i;
    char str[n], a = '1', b = '9', c = '7';
    gets(str);

    len = strlen(str);

    count += tocal(str, len, a);
    count += tocal(str, len, b);
    count += tocal(str, len, c);
    if (count == 3)
    {
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
