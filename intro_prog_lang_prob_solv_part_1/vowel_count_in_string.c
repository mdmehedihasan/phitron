#include <stdio.h>
int main()
{
    char letter[100];
    fgets(letter, sizeof(letter), stdin);
    int i = 0, count = 0;
    while (letter[i] != '\0')
    {
        if (letter[i] == 'a' || letter[i] == 'e' || letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf("%d", count);

    return 0;
}