#include <stdio.h>
void asen(int *a, int n)
{
    int temp1, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp1 = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp1;
            }
        }
    }
}

void desen(int *b, int n)
{
    int temp2, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(b + j) < *(b + j + 1))
            {
                temp2 = *(b + j);
                *(b + j) = *(b + j + 1);
                *(b + j + 1) = temp2;
            }
        }
    }
}

int main()
{
    int n, i, a[100], b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    asen(a, n);
    desen(b, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i] - b[i]);
    }

    return 0;
}
