#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    scanf("%s", s);
    int a, b, i, j, len, result = 0;
    len = strlen(s);

    scanf("%d %d", &a, &b);

    for (i = 0; i < len; i++)
    {
        int sum = 0;
        for (j = 0; j <= i; j++)
        {
            if (s[j] == '+')
            {
                sum = a + b;
            }
            if (s[j] == '*')
            {
                sum = a * b;
            }
        }
        result += sum;
    }
    printf("%d", result);
    return 0;
}