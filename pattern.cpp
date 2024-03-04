#include <bits/stdc++.h>
using namespace std;

int main(){
int p;
cin>>p;
for(int i=1;i<=p;i++){
    if(i==1){
     for(int j=1;j<=p;j++){
        cout<<j;
    }
    }
    else if(i==p){
       for(int j=p;j>=1;j--){
        cout<<j;
    }
    }
    else{
      for(int j=1;j<=p;j++){
        if(j==1){
            cout<<i;
        }
        else if(j==5){
            cout<<p-i+1;
        }
        else{
            cout<<" ";
        }
    }
    }
cout<<endl;
}

return 0;
}
