#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	long long ans = 0;
	for(int i=1,val;i<=n;i++) {
		cin >> val;
		ans += val;
	}
	int m;
	cin >> m;
	for(int i=1,l,r,val;i<=m;i++) {
		cin >> l >> r >> val;
		ans += (long long)(r - l + 1) * val;
		cout << ans << endl;
	}
	return 0;
}
