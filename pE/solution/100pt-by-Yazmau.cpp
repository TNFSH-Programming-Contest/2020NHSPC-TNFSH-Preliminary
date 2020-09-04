#include<bits/stdc++.h>
#define maxn 1000005
#define ll long long
#define pli pair<long long,int>
using namespace std;
struct edge {
	int v;
	ll cost;
};
vector<edge> G[maxn];
ll dis[maxn];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,a,b,s;
	cin >> n >> m >> a >> b >> s;
	for(int i=0,u,v,cost;i<m;i++) {
		cin >> u >> v >> cost;
		G[u].push_back({v, (ll)b * cost + a});
		G[v].push_back({u, (ll)b * cost + a});
	}
	
	memset(dis, -1, sizeof dis);
	dis[s] = 0;
	priority_queue<pli,vector<pli>,greater<pli> > pq;
	pq.push({dis[s],s});
	while(!pq.empty()) {
		pli now = pq.top();
		pq.pop();
		int u = now.second;
		if(now.first != dis[u])	continue;
		for(edge e : G[u]) {
			int v = e.v;
			ll cost = e.cost;
			if(dis[v] == -1 || dis[u] + cost < dis[v]) {
				dis[v] = dis[u] + cost;
				pq.push({dis[v],v});
			}
		}
	}

	for(int i=1;i<=n;i++)
		cout << dis[i] << " ";
	cout << endl;
	return 0;
}
