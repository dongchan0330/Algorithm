#include <iostream>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
int map[501][501];
int visit[501][501];
vector<int>v;
int n, m, cnt = 0;
void dfs(int x, int y) {
	cnt++;
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx && nx <= n && 0 <= ny && ny <= m) {
			if (!visit[nx][ny] && map[nx][ny]) {
				visit[nx][ny] = 1;
				dfs(nx, ny);
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int max = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visit[i][j] && map[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	cout << v.size() << "\n";
	for (int i : v) {
		if (max < i) {
			max = i;
		}
	}
	cout << max << "\n";
}