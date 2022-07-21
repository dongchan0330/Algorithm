#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	while (cin >> n) {
		int sum = 1;
		int cnt = 1;

		while (1) {
			if (sum % n == 0)	break;
			else {
				cnt++;
				sum = sum * 10 + 1;
				sum %= n;
			}
		}
		cout << cnt << "\n";
	}
}