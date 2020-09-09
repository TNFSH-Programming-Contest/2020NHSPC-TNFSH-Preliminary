#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

int main() {
	registerValidation();

	int N = inf.readInt(1, 200000);
	inf.readEoln();

	for (int i = 0; i < N; i++) {
		int a = inf.readInt(-100000, 100000);
		inf.readSpace();
	}
	inf.readEoln();

	int M = inf.readInt(1, 200000);
	inf.readEoln();

	for (int i = 0; i < M; i++) {
		int l = inf.readInt(1, N);
		inf.readSpace();
		int r = inf.readInt(1, N);
		inf.readSpace();

		ensure(l <= r);

		int w = inf.readInt(-100000, 100000);
		inf.readSpace();

		inf.readEoln();
	}

	inf.readEof();

	return 0;
}
