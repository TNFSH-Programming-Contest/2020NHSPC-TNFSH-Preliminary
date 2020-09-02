#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long

const int MAXN = 2e5 + 5;

vector<int> AE[MAXN];

int tree_size[MAXN];
int exclude_v[MAXN];

int dfs_size(int p, int pa)
{
    tree_size[p] = 1;
    for (int x: AE[p])
        if (x != pa)
            tree_size[p] += dfs_size(x, p);
    
    return tree_size[p];
}

void dfs_exclude(int p, int pa, int N)
{
    auto sq = [](int x)
    {
        return x * x;
    };
    
    int &sum = exclude_v[p];
    
    sum = sq(N - tree_size[p]);
    for (int x: AE[p])
        if (x != pa)
            sum += sq(tree_size[x]);
    
    for (int x: AE[p])
        if (x != pa)
            dfs_exclude(x, p, N);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i=0, a, b; i<n-1; i++)
        cin >> a >> b, --a, --b,
        AE[a].push_back(b), AE[b].push_back(a);
    
    dfs_size(0, 0);
    dfs_exclude(0, 0, n);
    
    int m;
    cin >> m;
    for (int mi=0; mi<m; mi++)
    {
        int qi;
        cin >> qi, --qi;
        
        cout << exclude_v[qi] << ' ';
    }
    cout << '\n';
}
