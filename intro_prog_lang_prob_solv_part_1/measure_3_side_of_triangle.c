/*
You will be given three non-negative integers A,B and C. You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). If the answer is yes, print "Yes" otherwise "No".
*/
#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == 0 || B == 0 || C == 0)
    {
        printf("No");
    }
    else if (A == B && A == C && B == C)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}