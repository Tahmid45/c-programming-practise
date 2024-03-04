#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    int a[n];
    int c=0;
    for(int i=0; i<n; i++)
    {

    }

    for(int i=0; i<c-1; i++)
    {
        for(int j=i+1; j<c; j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }

        }
    }
    for(int i=0; i<c; i++)
    {
        s[i]=a[i]+'a';
        cout<<s[i];
    }

    return 0;
}
