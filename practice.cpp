#include <bits/stdc++.h>
using namespace std;
int main()
{

        char s[100001];
    int cnt[26]= {0};
     int sz;
    while(while(cin.getline(s,100001))){



        sz = strlen(s);
        for(int i=0; i<sz; i++)
        {
            if(s[i]!=' ')
            {
                int x = s[i]-'a';
                cnt[x]++;
            }
        }
        int k=0;
        for(int i='a'; i<='z'; i++)
        {
            if(cnt[k]!=0)
            {
                for(int j=1; j<=cnt[k]; j++)
                {
                    cout<<char(i);
                }

            }
            k++;

        }

    cout<<endl;
 }
    return 0;
}
