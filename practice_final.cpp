#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int r=0;
    while(ss>>word){
       int p=word.size();
       int c=0;
       for(int i=0;i<p;i++){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
            c++;
        }
       }
       if(c>0){
        r++;
       }
    }
    cout<<r<<endl;
return 0;
}
