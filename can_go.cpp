#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
bool vis[1000][1000];
bool flag =false;
int p,q,r,s;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
void dfs(int si,int sj){

    vis[si][sj]=true;
    for(int i = 0;i<4;i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(a[ci][cj]=='B'){
            flag=true;
        }
        if(valid(ci,cj)==true && vis[ci][cj]== false)
        {
             dfs(ci,cj);
        }
    }
}
int main(){
 cin>>m>>n;

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]=='A'){
            p=i;
            q=j;
        }
        if(a[i][j]=='B'){
            r=i;
            s=j;
        }
    }
 }
 memset(vis,false,sizeof(vis));
 int si=p;
    int sj=q;
 dfs(si,sj);
    if(flag==true){
        cout<<"YES";
    }
    else if(flag==false){
        cout<<"NO";
    }
return 0;
}
