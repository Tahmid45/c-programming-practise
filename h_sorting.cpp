#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++){
        if(x[i]>x[i+1]){
            int tmp = x[i];
            x[i]=x[i+1];
            x[i+1]=tmp;
        }
    }


return 0;
}

