#include<bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
int ans;
int n,m;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int ci,int ci){
    if(ci>=0 && ci < n && cj>=0 && cj<m)
    {
        return true;
    }
    else{
        return false;
    }
}
void dfs(int si,int sj){
    vis[si][sj]=true;
    ans++;
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
    }
    if(valid(ci,cj) && !vis[ci][cj])

    {
        dfs(ci,cj);
        r++;
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==false && a[i][j]=='.'){
                dfs(i,j);
                p.push_back(r);
                r=1;
                flag = true;
            }
        }
    }
    if(flag == false){
        cout<<"-1";
    }
    else{
        sort(p.begin,p.end());
        cout<<p[0];
    }
return 0;
}
