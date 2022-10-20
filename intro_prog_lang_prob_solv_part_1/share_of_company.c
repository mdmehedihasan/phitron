
// Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. Can you tell the amount of share of Habib?
// sample input 5% 4% and sample output 20%
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%% %d%%", &x, &y);
    printf("%d%%", x * y);
    return 0;
}