#include <stdio.h>
int main()
{
    char input[100];
    fgets(input, sizeof(input), stdin);
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            input[i] -= 32;
    }
    puts(input);
    return 0;
}