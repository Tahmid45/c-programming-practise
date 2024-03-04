#include<bits/stdc++.h>
using namespace std;
int main(){
    char x[2];
    cin>>x;
    int x;
    if(x>='0' || x<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    else if(x>='a' || x<='z'){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else if(x>='A' || x<='Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
return 0;
}
