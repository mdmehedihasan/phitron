#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int p_count = 0, m_count = 0, count1 = 0, count2 = 0;
    char arr[100];

    scanf("%s", arr);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == '+')
        {
            count1 += 1;
            if (count1 > p_count)
            {
                p_count = count1;
            }
            if (arr[i + 1] == '-')
            {
                count1 = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == '-')
        {
            count2 += 1;
            if (count2 > m_count)
            {
                m_count = count2;
            }
            if (arr[i + 1] == '+')
            {
                count2 = 0;
            }
        }
    }

    if (m_count > p_count)
    {
        printf("%d", m_count);
    }
    else
        printf("%d", p_count);
    return 0;
}