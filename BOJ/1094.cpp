#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int cnt = 1, min = 64, sum = 64;
	while (sum > n) {
		min = min / 2;
		if (sum - min >= n)sum -= min;
		else cnt++;
	}
	cout << cnt;
}