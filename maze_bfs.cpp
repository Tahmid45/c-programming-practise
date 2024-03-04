#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
char a[1005][1005];
vector<pair<int,int>>path;
int si,sj;
int di,dj;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};

int n,m;

bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m || a[i][j]=='#'){
        return false;
    }
    else{
       return true;
    }
}

void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                path.push_back({ci,cj});
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    int si,sj;
    int di,dj;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 'R')
            {
                si=i;
                sj=j;
            }
            if(a[i][j] == 'D')
            {
                di=i;
                dj=j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(si,sj);
    if(vis[di][dj]==true){
        int k=path.size();
       for(int i=0; i<k; i++)
         { if(path[i].first==di && path[i].second == dj){
             break;
              }
           a[path[i].first][path[i].second]='X';
         }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }

    else{
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }
    cout<<endl;
    cout<<endl;
    int k=path.size();
    for(int i=0; i<k; i++)
         {
           cout<<path[i].first<<" "<<path[i].second<<endl;
         }

    return 0;
}
