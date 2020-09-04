#include<bits/stdc++.h>
#define maxn 1000005
using namespace std;
int n,k,m;
int arr[maxn],brr[maxn];
bool check(int mid) {
	long long cnt = 0;
	for(int i=1;i<=n;i++) {
		long long rem = (long long)k - (long long)arr[i] * mid;
		if(rem > 0)
			cnt += (rem - 1) / brr[i] + 1;
	}
	return cnt <= m;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k >> m;
	for(int i=1;i<=n;i++)
		cin >> arr[i];
	for(int i=1;i<=n;i++)
		cin >> brr[i];
	int l = 0 , r = 1000000000 , mid;
	while(true) {
		if(r - l < 3) {
			for(mid = r;mid >= l && check(mid);mid--);
			mid++;
			break;
		}
		mid = (l + r) >> 1;
		if(check(mid))
			r = mid;
		else
			l = mid + 1;
	}
	cout << mid << endl;
	return 0;
}
