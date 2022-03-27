#include <iostream>
#include <memory.h>
#pragma warning(disable:4996)
using namespace std;
int map[251][251];
bool visit[251][251];
int n, m;
int cnt = 0;
int dx[8] = { -1,1,0,0,1,-1,-1,1 };
int dy[8] = { 0,0,-1,1,1,1,-1,-1 };
void dfs(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
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
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] && !visit[i][j]) {

				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << "\n";

}