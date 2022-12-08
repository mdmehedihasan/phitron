#include <stdio.h>
struct Student
{
    int roll;
    double weight;

    int age;
};

int main()
{
    struct Student s = {.roll = 12, .weight = 85.2, .age = 33};
    struct Student *sp;
    sp = &s;

    // printf("%d\n", sizeof(struct Student));
    // printf("%p\n%p", sp, &s);
    int i = 4;
    int *pi;
    pi = &i;
    printf("%d %d %lf", sp->age, sp->roll, sp->weight);

    return 0;
}