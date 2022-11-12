#include <stdio.h>
int main()
{
    char a[100], b[100], flag = 0;
    int i;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }
    }
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] < b[i])
        {
            printf("-1");
            flag = 1;
            break;
        }
        if (a[i] > b[i])
        {
            printf("1");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("0");
    }
    return 0;
}