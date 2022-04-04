#include <iostream>
#include <queue>
using namespace std;
queue<int>q;
int n, m, ans;
int map[501][501];
int visit[501];
void bfs() {
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (!visit[i] && map[x][i]) {
				visit[i] = 1;
				ans++;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
		if (a == 1) {
			q.push(b);
			visit[b] = 1;
			ans++;
		}
		if (b == 1) {
			q.push(a);
			visit[a] = 1;
			ans++;
		}
	}
	bfs();
	if (ans == 0) {
		cout << ans;
	}
	else {
		cout << ans - 1;
	}
}