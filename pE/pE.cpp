#include <iostream>
#include <set>
#include <vector>
using namespace std;

#define int long long

const int MAXN = 1e5 + 5;
using pii = pair<int, int>;

struct way
{
    int b, vv;
};

vector<way> AE[MAXN];

vector<int> dijkstra(int N, int ST)
{
    vector<int> dis(N, 1e18);
    dis[ST] = 0;
    
    auto dis_less = [&](int a, int b)
    {
        return pii{dis[a], a} < pii{dis[b], b};
    };
    
    set<int, decltype(dis_less)> pq(dis_less);
    for (int i=0; i<N; i++)
        pq.insert(i);
    
    while (pq.size())
    {
        int p = *pq.begin(); pq.erase(pq.begin());
        for (way e: AE[p])
        {
            int b = e.b, vv = e.vv;
            if (dis[p] + vv < dis[b])
            {
                pq.erase(b);
                dis[b] = dis[p] + vv;
                pq.insert(b);
            }
        }
    }
    
    return dis;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, A, B, ST;
    cin >> n >> m >> A >> B >> ST, --ST;
    
    for (int i=0, a, b, vv; i<m; i++)
    {
        cin >> a >> b >> vv, --a, --b;
        vv = A + vv*B;
        AE[a].push_back({b, vv}), AE[b].push_back({a, vv});
    }
    
    vector<int> dis = dijkstra(n, ST);
    for (int i=0; i<n; i++)
        cout << dis[i] << ' ';
    cout << '\n';
}
