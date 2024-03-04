#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int c=0;
    while(ss>>word)
    {
        c++;
    }
    int x=0;
    stringstream pp(s);
    string wordp;
    while(pp>>wordp)
    {
        int p=wordp.size();
        for(int i= p-1; i>=0; i--)
        {
            cout<<wordp[i];
        }
        x++;
        if(x<c)
        {
            cout<<" ";
        }
    }
    return 0;
}
