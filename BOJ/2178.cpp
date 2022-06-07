#include <iostream>
#include <queue>
#pragma warning(disable:4996)
using namespace std;
int map[101][101];
int visit[101][101];
queue<pair<int, int>>q;
int dx[4] = { -1,1,0,0 };		//상,하,좌,우
int dy[4] = { 0,0,1,-1 };
int n, m;
void bfs(int x, int y) {
	q.push(make_pair(x, y));
	visit[x][y] = 1;
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (visit[nx][ny] == 0 && map[nx][ny] == 1) {
					q.push(make_pair(nx, ny));
					visit[nx][ny] = visit[x][y] + 1;
				}
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	bfs(0, 0);
	cout << visit[n - 1][m - 1];	//(0,0)에서 시작했으므로 목적지에서 1을 빼줌.
}