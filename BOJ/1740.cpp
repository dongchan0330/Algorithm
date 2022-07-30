#include <iostream>
using namespace std;
int num[60];
unsigned long long int n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i = 0;
	cin >> n;
	unsigned long long int sum = 0, tmp = 1;
	for (;; i++) {
		if (n < 1) {
			num[i] = 1;
			break;
		}
		num[i] = n % 2;
		n /= 2;
	}

	for (int j = 0; j < i; j++) {
		tmp = 1;
		for (int k = 0; k < j; k++) {
			tmp *= 3;
		}
		sum += tmp * num[j];
	}
	cout << sum;
}