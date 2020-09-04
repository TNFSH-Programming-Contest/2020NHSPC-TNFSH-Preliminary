#include<bits/stdc++.h> 
#define int long long 
#define X first 
#define Y second 
#define lson (root<<1) 
#define rson (root<<1|1) 
#define ALL(X) X.begin(),X.end() 
#define CLR(x,y) memset(x,y,sizeof(x)) 
//#define endl '\n' 
using namespace std; 
typedef pair<int,int> pii; 
int dp[200020]; 
int sz[200020]; 
int pa[200020]; 
vector<int>edge[200020]; 
void dfs(int x,int fa) 
{ 
    pa[x]=fa; 
    sz[x]=1; 
    for(int i:edge[x]) 
    { 
        if(i==fa)continue; 
        dfs(i,x); 
        sz[x]+=sz[i]; 
    } 
} 
inline int cal(int x) 
{ 
    return x*x; 
} 
int n; 
int solve(int x) 
{ 
    //if(~dp[x])return dp[x]; 
    int ans=0; 
    for(int i:edge[x]) 
    { 
        if(i==pa[x])continue; 
        ans+=cal(sz[i]); 
    } 
    ans+=cal(n-sz[x]); 
    return dp[x]=ans; 
} 
signed main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cin>>n; 
    for(int i=0,u,v;i<n-1;i++) 
    { 
        cin>>u>>v; 
        edge[u].emplace_back(v); 
        edge[v].emplace_back(u); 
    } 
    CLR(dp,-1); 
    dfs(1,-1); 
    int Q; 
    cin>>Q; 
    while(Q--) 
    { 
        int x; 
        cin>>x; 
        cout<<solve(x)<<' '; 
    } 
    cout<<endl; 
    return 0; 
} 