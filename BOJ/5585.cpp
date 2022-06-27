#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int sum = 1000 - n;
	int cnt = 0;
	while (sum != 0) {
		if (sum >= 500) {
			sum -= 500;
			cnt++;
		}
		else if (sum >= 100) {
			sum -= 100;
			cnt++;
		}
		else if (sum >= 50) {
			sum -= 50;
			cnt++;
		}
		else if (sum >= 10) {
			sum -= 10;
			cnt++;
		}
		else if (sum >= 5) {
			sum -= 5;
			cnt++;
		}
		else if (sum >= 1) {
			sum -= 1;
			cnt++;
		}
	}
	cout << cnt;
}