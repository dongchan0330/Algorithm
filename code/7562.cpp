#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>
#pragma warning(disable:4996)
using namespace std;
int n, k, a1, b1, a2, b2;
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };		//나이트의 이동 가능 거리
int dy[8] = { 2,1,-1,-2,-2,-1,1,2 };
queue<pair<int, int>>q;
int chase[301][301];
void bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			if (0 > nx || nx >= k || 0 > ny || ny >= k) {
				continue;
			}
			if (chase[nx][ny] == 0) {
				q.push(make_pair(nx, ny));
				chase[nx][ny] = chase[x][y] + 1;
			}
			if (nx == a2 && ny == b2) {
				break;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k >> a1 >> b1 >> a2 >> b2;
		if (a1 == a2 && b1 == b2) {
			cout << "0" << "\n";
		}
		else {
			q.push(make_pair(a1, b1));
			bfs();
			cout << chase[a2][b2] << "\n";
			memset(chase, 0, sizeof(chase));
			while (!q.empty()) {
				q.pop();
			}
		}
	}

}