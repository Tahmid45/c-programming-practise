#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int cnt=0;
    for(auto it=v.begin(); it<v.end(); it++)
    {
        for(auto t=v.begin(); t<v.end(); t++)
        {
            if(*t == *it+1)
            {
                cnt=cnt+1;
                break;
            }
        }
    }
    cout<<cnt;

    return 0;
}
