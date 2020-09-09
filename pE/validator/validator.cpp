#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

const int _1e5 = 100000;
const int _1e6 = 1000000;

vector<int> edges[_1e5 + 1];
bool visited[_1e5 + 1];

void dfs(int now) {
	if (visited[now]) {
		return;
	}
	visited[now] = true;
	for (auto next : edges[now]) {
		dfs(next);
	}
}

int main() {
	registerValidation();

	int N = inf.readInt(1, _1e5);
	inf.readSpace();
	int M = inf.readInt(1, 5 * _1e5);
	inf.readSpace();
	int A = inf.readInt(0, _1e6);
	inf.readSpace();
	int B = inf.readInt(0, _1e6);
	inf.readSpace();
	int S = inf.readInt(1, N);
	inf.readSpace();
	inf.readEoln();

	for (int i = 0; i < M; i++) {
		int u = inf.readInt(1, N);
		inf.readSpace();
		int v = inf.readInt(1, N);
		inf.readSpace();
		int w = inf.readInt(1, _1e6);
		inf.readSpace();
		inf.readEoln();

		edges[u].push_back(v);
		edges[v].push_back(u);
	}

	// check connected
	dfs(1);
	for (int i = 1; i <= N; i++) {
		ensure(visited[i]);
	}

	inf.readEof();

	return 0;
}
