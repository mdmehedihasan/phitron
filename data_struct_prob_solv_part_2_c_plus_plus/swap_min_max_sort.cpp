#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int a=4,b=5;
//    swap(a,b);
//    cout<<"a is:" <<a<<endl<<"b is: "<<b;
//    return 0;
//
    //min max sort

    int a=8,b=10,c=2,d=1,e=11;
    //int mini=min(a,b); //for two value find the  min value
    int mini=min({a,b,c,d,e});  //for multiple number to find the min value
    cout<<mini<<endl;
    //  int maxi=max(a,b); //for the two value to find the max value
    int maxi=max({a,b,c,d,e});
    cout<<maxi;

    //sort function for the c++
    vector<int>v= {4,2,5,8,1,3};
    cout<<endl<<"Before sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    sort(v.begin(),v.end());
    cout<<endl<<"after ascending sorting:"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }




}
