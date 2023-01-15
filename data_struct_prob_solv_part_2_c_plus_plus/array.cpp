#include<bits/stdc++.h>
#include<algorithm.h>
#include<string.h>
#include<vector.h>
using namespace std;
int main()
{
    int sum = 0, i, a[10];
    string s2;
    s2 = "helo";
    s2.pop_back();
    for (i = 1; i < 9; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    cout << s2;

    return 0;
}