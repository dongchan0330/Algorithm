#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;
int h, w, ans;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
char map[101][101];
bool visit[101][101];
void bfs(int x, int y) {
	visit[x][y] = true;
	queue<pair<int, int>>q;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < h && nx >= 0 && ny < w && ny >= 0) {
				if (map[nx][ny] == '#' && !visit[nx][ny]) {
					visit[nx][ny] = true;
					q.push({ nx,ny });
				}
			}
		}
	}
	ans++;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> h >> w;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!visit[i][j] && map[i][j] == '#') {
					bfs(i, j);
				}
			}
		}
		cout << ans << "\n";
		memset(map, 0, sizeof(map));
		memset(visit, false, sizeof(visit));
		ans = 0;
	}
}