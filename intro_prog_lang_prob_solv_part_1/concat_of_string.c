/*
You are given m strings of small letters, now concatenate the given strings.
The first line of the input will contain a single positive integer m , then the next m lines will contain a strings.
In the time of concatenation give a space after each word. See the sample output for more clarification.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char input[100];
    char fnal[200];

    for (i = 0; i < n; i++)
    {
        scanf("%s", input);
        strcat(fnal, input);
        strcat(fnal, " ");
    }
    printf("%s", fnal);
}