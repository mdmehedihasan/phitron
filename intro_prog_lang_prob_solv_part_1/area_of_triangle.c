#include <stdio.h>
int main()
{
    int height, base;
    float area;

    scanf("%d %d", &height, &base);
    area = 0.5 * height * base;
    printf("%f", area);

    return 0;
}
