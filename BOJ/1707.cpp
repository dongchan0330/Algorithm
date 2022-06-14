#include <iostream>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
vector<int>a[20001];
int check[20001];
void dfs(int x, int c) {
	check[x] = c;
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == 0) {
			dfs(y, 3 - c);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, v, e;
	cin >> n;
	for (int t = 0; t < n; t++) {
		cin >> v >> e;
		for (int i = 1; i <= v; i++) {
			a[i].clear();
			check[i] = 0;
		}
		for (int i = 0; i < e; i++) {
			int p, q;
			cin >> p >> q;
			a[p].push_back(q);
			a[q].push_back(p);
		}
		for (int i = 1; i <= v; i++) {
			if (check[i] == 0) {
				dfs(i, 1);
			}
		}
		bool ok = true;
		for (int i = 1; i <= v; i++) {
			for (int k = 0; k < a[i].size(); k++) {
				int j = a[i][k];
				if (check[i] == check[j]) {
					ok = false;
				}
			}
		}
		if (ok == true) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}