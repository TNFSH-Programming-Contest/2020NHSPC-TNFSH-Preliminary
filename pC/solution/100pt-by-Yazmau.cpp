#include<bits/stdc++.h>
#define maxn 200005
#define ll long long
using namespace std;
int n;
vector<int> G[maxn];
int sz[maxn];
ll ans[maxn];
void dfs(int u,int pa) {
	sz[u] = 1;
	for(int v : G[u])
		if(v != pa) {
			dfs(v,u);
			sz[u] += sz[v];
			ans[u] += (ll)sz[v] * sz[v];
		}
	ans[u] += (ll)(n - sz[u]) * (n - sz[u]);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=1,u,v;i<n;i++) {
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1,1);
	int q;
	cin >> q;
	while(q--) {
		int u;
		cin >> u;
		cout << ans[u] << " ";
	}
	cout << endl;
	return 0;
}
