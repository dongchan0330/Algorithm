#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m, cnt = 0, k = 0, p;
	cin >> n >> m;
	int num[51];
	deque <int> dq;
	for (int i = 0; i < m; i++) {
		int num1;
		cin >> num1;
		num[i] = num1;
	}
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	for (int i = 0; i < m; i++) {
		if (dq.size() == 1)	continue;

		for (int j = 0; j < n; j++) {
			if (num[i] == dq.at(j)) {
				p = j;
				break;
			}
		}
		if (p <= dq.size() / 2) {
			for (int j = 0; j < p; j++) {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
			dq.pop_front();
		}
		else {
			for (int j = 0; j < dq.size() - p; j++) {
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
			dq.pop_front();
		}
	}
	cout << cnt;
}