#include <iostream>
#include <memory.h>
#pragma warning(disable:4996)
using namespace std;
int map[51][51];
bool visit[51][51];
int w, h;
int cnt = 0;
int dx[8] = { -1,1,0,0,1,-1,-1,1 };
int dy[8] = { 0,0,-1,1,1,1,-1,-1 };
void dfs(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < h && ny < w) {
			if (map[nx][ny] && !visit[nx][ny]) {
				visit[nx][ny] = true;
				dfs(nx, ny);
			}

		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] && !visit[i][j]) {

					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		memset(map, 0, sizeof(map));
		memset(visit, false, sizeof(visit));
		cnt = 0;
	}
}