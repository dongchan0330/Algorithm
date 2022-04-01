#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, cnt = 0;
	cin >> n;
	int score[102] = { 0, };
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		score[i] = num;
	}
	for (int i = n - 1; i >= 1; i--) {
		while (score[i] <= score[i - 1]) {
			score[i - 1]--;
			cnt++;
		}
	}
	cout << cnt;
}