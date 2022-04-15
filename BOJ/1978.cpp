#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n) {
	if (n == 1)	return false;
	for (int i = 2; i <= sqrt(n); i++)	if ((n % i) == 0)	return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (isprime(num))	cnt++;
	}
	cout << cnt;
}