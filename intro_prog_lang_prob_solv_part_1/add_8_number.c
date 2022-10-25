#include <stdio.h>
int main()
{
    int i, n, sum = 0, inp;
    printf("How much time?");
    scanf("%d", &n);
    printf("Give that number:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &inp);
        sum += inp;
    }
    printf("\n%d", sum);
    return 0;
}