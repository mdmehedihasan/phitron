#include <stdio.h>
int cal(int a)
{
    int i;
    if (a > 0)
    {
        for (i = a; i >= -a; i--)
        {
            printf("%d ", i);
        }
    }

    else

        for (i = a; i <= -a; i++)
        {
            printf("%d ", i);
        }

    return 0;
}

int main()
{
    int a = -5;
    cal(a);
    return 0;
}