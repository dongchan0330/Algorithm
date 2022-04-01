#include <iostream>
#include <queue>
using namespace std;
int n, r1, c1, r2, c2;
int dx[6] = { -2,-2,0,0,2,2 };
int dy[6] = { -1,1,-2,2,-1,1 };
queue<pair<int, int>>q;
int map[201][201];
bool visit[201][201];
void bfs(int x, int y) {
	map[x][y] = 0;
	visit[x][y] = true;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 6; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (ny < 0 || nx < 0 || ny > n || nx > n)		continue;
			if (!visit[nx][ny]) {
				visit[nx][ny] = true;
				map[nx][ny] = map[x][y] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> r1 >> c1 >> r2 >> c2;
	bfs(r1, c1);
	if (map[r2][c2] == 0) {
		cout << "-1";
	}
	else {
		cout << map[r2][c2];
	}
}