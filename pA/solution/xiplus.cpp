#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n, ans = 0, a, b, c;
	cin >> n;
	while (n--) {
		cin >> a;
		ans += a;
	}
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		ans += (b - a + 1) * c;
		cout << ans << endl;
	}
}
