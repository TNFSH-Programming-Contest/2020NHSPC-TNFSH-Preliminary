#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

const int _1e6 = 1000000;
const int _1e9 = 1000000000;

int main() {
	registerValidation();

	int N = inf.readInt(1, _1e6);
	inf.readEoln();

	map<int, int> cnt;

	for (int i = 0; i < N; i++) {
		int V = inf.readInt(1, _1e6);
		inf.readSpace();

		cnt[V]++;
		ensure(cnt[V] <= 2);
	}
	inf.readEoln();

	inf.readEof();

	return 0;
}
