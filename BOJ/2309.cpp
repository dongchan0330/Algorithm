#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int a[9];
	int sum = 0, n = 9;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (sum - a[i] - a[j] == 100) {
				for (int k = 0; k < n; k++) {
					if (i == k || j == k)	continue;
					cout << a[k] << "\n";
				}
				return 0;
			}
		}
	}
}