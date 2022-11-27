#include <stdio.h>
void find()
{
    int i, totalarg, totalbra;
    char a[50], b[50];
    totalarg = 0;
    scanf("%s", a);
    scanf("%s", b);

    for (i = 0; i <= 5; i++)
    {
        if (a[i] == '1')
        {
            totalarg += 1;
        }
    }
    totalbra = 0;
    for (i = 0; i <= 5; i++)
    {

        if (b[i] == '1')
        {
            totalbra += 1;
        }
    }

    if (totalarg == totalbra)
    {
        find();
    }
    else
    {
        if (totalarg > totalbra)
        {
            printf("Argentina");
        }
        else
            printf("Brazil");
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Argentina");
    }
    else if (b > a)
    {
        printf("Brazil");
    }
    else
    {
        find();
    }
    return 0;
}
