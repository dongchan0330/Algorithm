#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		int cnt = 0;
		cin >> n >> m;
		vector<int>a(n);
		vector<int>b(m);
		for (int i = 0; i < n; i++)	cin >> a[i];
		for (int i = 0; i < m; i++)	cin >> b[i];
		sort(a.begin(), a.end(), greater<int>());
		sort(b.begin(), b.end(), greater<int>());
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] > b[j]) {
					cnt += m - j;
					break;
				}
			}
		}
		cout << cnt << "\n";
	}
}