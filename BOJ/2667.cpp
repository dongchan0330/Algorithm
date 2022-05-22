#include <iostream>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
int map[25][25];
int visit[25][25];
vector<int>v;
int n, cnt;
void dfs(int x, int y) {
	cnt++;
	visit[x][y] = 1;
	for (int j = 0; j < 4; j++) {
		int nx = x + dx[j], ny = y + dy[j];
		if (0 <= nx && nx < n && 0 <= ny && ny < n) {
			if (!visit[nx][ny] && map[nx][ny]) {
				visit[nx][ny] = 1;
				dfs(nx, ny);
			}
		}
	}

}
int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j] && map[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i : v) {
		cout << i << "\n";
	}
}