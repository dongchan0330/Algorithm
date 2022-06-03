#include <iostream>
#include <queue>
#pragma warning(disable:4996)
using namespace std;
queue<int>q;
int map[100][100];
int dp[100];
int n;
void bfs(int x) {
	q.push(x);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (map[y][i] && !dp[i]) {
				dp[i] = dp[y] + 1;
				q.push(i);
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	int start, end, m;
	cin >> start >> end >> m;
	for (int i = 0; i < m; i++) {
		int p, q;
		cin >> p >> q;
		map[p][q] = map[q][p] = 1;
	}
	bfs(start);
	if (dp[end] == 0) {
		cout << "-1";
	}
	else {
		cout << dp[end];
	}
}