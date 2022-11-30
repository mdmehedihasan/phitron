#include <stdio.h>
void findHash(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        findHash(i);
    }
    return 0;
}