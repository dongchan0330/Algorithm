#include <iostream>
using namespace std;
int mod(int x, int y) {
	int mod = x % y;
	while (mod > 0) {
		x = y;
		y = mod;
		mod = x % y;
	}
	return y;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		int result = (num1 * num2) / mod(num1, num2);
		cout << result << "\n";
	}
}