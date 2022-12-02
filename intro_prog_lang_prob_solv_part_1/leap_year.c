#include <stdio.h>
int leap_year_cal(int a)
{
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int leap_year, res;
    scanf("%d", &leap_year);
    res = leap_year_cal(leap_year);
    if (res == 1)
    {
        printf("Leap Year");
    }
    else
        printf("Not leap year");

    return 0;
}