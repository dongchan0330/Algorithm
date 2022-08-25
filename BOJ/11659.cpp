#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<long long int>v(n + 1);
	v[0] = 0;
	for (int i = 1; i <= n; i++) {
		long long int num;
		cin >> num;
		v[i] = v[i - 1] + num;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a - 1] << "\n";
	}
}