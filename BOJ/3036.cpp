#include <iostream>
using namespace std;
int mod(int a, int b) {
	int mod = a % b;
	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int num[101];
	for (int i = 0; i < n; i++) {
		int num1;
		cin >> num1;
		num[i] = num1;
	}
	for (int i = 1; i < n; i++) {
		int tmp = mod(num[0], num[i]);
		cout << num[0] / tmp << "/" << num[i] / tmp << "\n";
	}
}