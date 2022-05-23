#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int m, n, k;
int cnt = 0;
int arr[100][100];
bool visit[100][100];
vector<int>v;
void dfs(int x, int y) {
	int nx, ny;
	visit[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < m && ny < n && !visit[nx][ny]) {
			dfs(nx, ny);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = y1; j < y2; j++) {
			for (int k = x1; k < x2; k++) {
				arr[j][k] = 1;
				visit[j][k] = true;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0 && !visit[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	int size = v.size();
	cout << size << "\n";
	for (int i : v) {
		cout << i << " ";
	}
}