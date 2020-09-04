#include<bits/stdc++.h>
#define maxn 1000005
#define Mod 1000000007
#define ll long long
#define Val(x) (((ll)x) % Mod)
using namespace std;
int fac[maxn];
int Pow(int a,int n) {
	int ret = 1;
	int base = a;
	while(n) {
		if(n & 1)	ret = Val(ret * base);
		base = Val(base * base);
		n >>= 1;
	}
	return ret;
}
int inv(int val) {
	return Pow(val, Mod - 2);
}
int C(int n,int m) {
	return Val(Val(fac[n] * inv(fac[m])) * inv(fac[n - m]));
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int,int> cnt;
	for(int i=1,val;i<=n;i++) {
		cin >> val;
		cnt[val]++;
	}
	int odd_cnt = 0;
	for(auto now : cnt)
		odd_cnt += (now.second & 1);
	if((n & 1) < odd_cnt)
		cout << 0 << endl;
	else {
		fac[0] = 1;
		for(int i=1;i<maxn;i++)
			fac[i] = Val(fac[i - 1] * i);
		int ans = fac[n / 2];
		for(auto now : cnt)
			ans = Val(ans * inv(fac[now.second / 2]));
		for(auto now : cnt)
			ans = Val(ans * fac[now.second]);
		cout << ans << endl;
	}
	return 0;
}
