#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    cout<<"size :"<<n<<endl;
    vector<int>v(26);
    for(int i=0; i<n; i++)
    {
        v[s[i]-'a']++;
    }
    for(int i=1; i<=26; i++)
    {
        if(v[i]<100 && v[i]>0)
        {
            cout<<char(v[i]+'a')<<" : "<<v[i]<<endl;
        }

    }
    return 0;
}
