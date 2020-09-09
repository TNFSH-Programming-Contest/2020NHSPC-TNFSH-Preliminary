#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

const int _2e5 = 200000;

int main() {
	registerValidation();

	int N = inf.readInt(1, 100);
	inf.readEoln();

	for (int i = 0; i < N - 1; i++) {
		int a = inf.readInt(1, N);
		inf.readSpace();
		int b = inf.readInt(1, N);
		inf.readSpace();
		inf.readEoln();
	}

	int M = inf.readInt(1, _2e5);
	inf.readEoln();

	ensure(M == 1);

	for (int i = 0; i < M; i++) {
		int Q = inf.readInt(1, N);
		inf.readSpace();
	}
	inf.readEoln();

	inf.readEof();

	return 0;
}
