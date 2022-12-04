#include <stdio.h>
#include <string.h>

void take_string(char a[])
{
    int len, i, j, temp;
    len = strlen(a);
    for (i = 0; i < len; i++)
    {

        for (j = 0; j < len - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%s", a);
}

int main()
{
    char c[100];
    scanf("%s", c);
    take_string(c);
    return 0;
}