#include <iostream>
#pragma warning(disable:4996)
using namespace std;
int a[20];
int n;
bool check[20000000];
void go(int i, int sum) {
	if (i == n) {
		check[sum] = true;
		return;
	}
	go(i + 1, sum + a[i]);
	go(i + 1, sum);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	go(0, 0);
	for (int i = 0;; i++) {
		if (!check[i]) {
			cout << i << "\n";
			break;
		}
	}
}