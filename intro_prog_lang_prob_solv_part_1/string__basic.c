// string is a collection of
#include <stdio.h>
int main()
{
    char name[100];
    // gets(name);
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
    return 0;
}