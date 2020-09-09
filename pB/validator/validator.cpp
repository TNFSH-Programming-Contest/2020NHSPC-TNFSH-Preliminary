#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

const int _1e5 = 100000;
const int _1e9 = 1000000000;

int main() {
	registerValidation();

	int N = inf.readInt(1, _1e5);
	inf.readSpace();
	int K = inf.readInt(1, _1e9);
	inf.readSpace();
	int M = inf.readInt(0, _1e9);
	inf.readEoln();

	int a = inf.readInt(1, _1e9);
	for (int i = 1; i < N; i++) {
		inf.readSpace();
		int a = inf.readInt(1, _1e9);
	}
	inf.readEoln();

	int b = inf.readInt(1, _1e9);
	for (int i = 1; i < N; i++) {
		inf.readSpace();
		int b = inf.readInt(1, _1e9);
	}
	inf.readEoln();

	inf.readEof();

	return 0;
}
