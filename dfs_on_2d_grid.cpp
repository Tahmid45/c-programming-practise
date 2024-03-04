#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
bool vis[1000][1000];
int r=0;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
void dfs(int si,int sj){
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i = 0;i<4;i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]== false && a[ci][cj]=='.')
        {
            dfs(ci,cj);
        }
    }
}
int main(){
 cin>>n>>m;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
 }
 int si,sj;
 int di,dj;
 cin>>si>>sj;
 cin>>dsi>>dsj;
 dfs(si,sj);
 if(vis[dsi][dsj]==true){
    cout<<"YES";
 }
 else{
    cout<<"NO";
 }
return 0;
}
