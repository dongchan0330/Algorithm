#include <iostream>
#include <memory.h>
using namespace std;
int t, n;
int map[1001];
bool visit[1001];
void dfs(int x) {
	visit[x] = true;
	if (!visit[map[x]]) {
		dfs(map[x]);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> map[i];
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (!visit[i]) {
				dfs(i);
				cnt++;
			}
		}
		cout << cnt << "\n";
		memset(visit, false, sizeof(visit));
	}
}