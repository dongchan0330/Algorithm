#include <iostream>
#include <queue>
using namespace std;
int r, c, o, v;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
char map[251][251];
bool visit[251][251];
void bfs(int x, int y) {
	visit[x][y] = true;
	queue<pair<int, int>>q;
	int sheep = 0, wolf = 0;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		if (map[x][y] == 'o') {
			sheep++;
		}
		if (map[x][y] == 'v') {
			wolf++;
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < r && nx >= 0 && ny < c && ny >= 0) {
				if (map[nx][ny] != '#' && !visit[nx][ny]) {
					visit[nx][ny] = true;
					q.push({ nx,ny });
				}
			}
		}
	}
	if (sheep > wolf) {
		o += sheep;
	}
	else {
		v += wolf;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (!visit[i][j] && map[i][j] != '#') {
				bfs(i, j);
			}
		}
	}
	cout << o << " " << v;
}