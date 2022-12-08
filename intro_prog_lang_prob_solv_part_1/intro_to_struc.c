#include <stdio.h>
struct Student
{
    int roll;
    char name[199];
    float weight;
};

int main()
{
    struct Student s1 = {.roll = 12, .weight = 66.33}; //

    printf("%d", s1.roll);

    int a;
    return 0;
}