#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100],s[2],b[100];
    cin>>a>>s>>b;
    int f=a-'0';
    int l=b-'0';
    if(f>l && s=='>'){
        cout<<Right<<endl;
    }
    else if(f<l && s=='<'){
        cout<<Right<<endl;
    }
    else if(f==l && s=='='){
        cout<<Right<<endl;
    }
    else{
        cout<<Wrong<<endl;
    }
return 0;
}
