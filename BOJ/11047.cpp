#include <iostream>
#include <queue>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k, sum = 0, cnt = 0;
	cin >> n >> k;
	priority_queue<int>coin;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		coin.push(num);
	}
	while (1) {
		if (k == 0)	break;
		if (coin.top() > k) {
			coin.pop();
		}
		else {
			k = k - coin.top();
			cnt++;
		}
	}
	cout << cnt;
}