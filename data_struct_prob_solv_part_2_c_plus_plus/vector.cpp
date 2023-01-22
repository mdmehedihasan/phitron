#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    for(int i=0; i<10; i++)
    {
        cout<<"Before push"<<a.size();
        a.push_back(i);
        cout<<" After push"<<a.size()<<endl;
    }

    a.insert(a.begin()+1,100);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"After erase"<<endl;

    a.erase(a.begin()+0);
    a.pop_back();
      for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"After resize"<<endl;
    vector<int>b={1,2,3,4,5};
    a.resize(3);
    for(int i=0;i<a.size();i++){
        cout<<b[i]<<endl;
    }

    return 0;
}
