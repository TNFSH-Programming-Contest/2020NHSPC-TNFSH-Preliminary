#include <bits/stdc++.h>

#include "testlib.h"

using namespace std;

const int _2e5 = 200000;

vector<int> edges[_2e5 + 1];
bool visited[_2e5 + 1];

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

	int N = inf.readInt(1, _2e5);
	inf.readEoln();

	for (int i = 0; i < N - 1; i++) {
		int a = inf.readInt(1, N);
		inf.readSpace();
		int b = inf.readInt(1, N);
		inf.readSpace();
		inf.readEoln();

		edges[a].push_back(b);
		edges[b].push_back(a);
	}

	// check connected
	dfs(1);
	for (int i = 1; i <= N; i++) {
		ensure(visited[i]);
	}

	int M = inf.readInt(1, _2e5);
	inf.readEoln();

	set<int> used;

	for (int i = 0; i < M; i++) {
		int Q = inf.readInt(1, N);
		inf.readSpace();

		ensure(used.count(Q) == 0);
		used.insert(Q);
	}
	inf.readEoln();

	inf.readEof();

	return 0;
}
