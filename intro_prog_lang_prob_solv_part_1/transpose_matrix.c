#include <stdio.h>
int main()
{
    int mat[100][100], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}
