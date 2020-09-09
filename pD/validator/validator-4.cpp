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
		int V = inf.readInt(1, _1e9);
		inf.readSpace();

		cnt[V]++;
	}
	inf.readEoln();

	int cntOdd = 0;
	for (auto it : cnt) {
		if (it.second % 2 == 1) {
			cntOdd++;
		}
	}
	ensure(cntOdd <= 1);

	inf.readEof();

	return 0;
}
