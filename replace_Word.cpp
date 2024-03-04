#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    for(int t=0; t<tst; t++)
    {
        string s;
        getline(cin,s);
        int f=0;
        int k=0;
        for(int i=0; i<6; i++)
        {
            if(i<3)
            {
                int j = (s[i]-'0');
                f=f+j;
            }
            else if(i>2)
            {
                int p=(s[i]-'0');
                k=k+p;
            }}

        if(f==k)
        {
            cout<<"YES"<<endl;
        }
        else if(f!=k)
        {
            cout<<"NO"<<endl;
        }
}

    return 0;
}
