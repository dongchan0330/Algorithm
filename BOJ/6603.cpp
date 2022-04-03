#include <iostream>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
vector<int>lotto;
void solve(vector<int>& a, int index, int cnt) {
	if (cnt == 6) {
		for (int i : lotto) {
			cout << i << " ";
		}
		cout << "\n";
		return;
	}
	int n = a.size();
	if (n == index)	return;
	lotto.push_back(a[index]);
	solve(a, index + 1, cnt + 1);
	lotto.pop_back();
	solve(a, index + 1, cnt);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(a, 0, 0);
		cout << "\n";

	}
}