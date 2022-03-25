#include <iostream>
using namespace std;
long long int mod(long long int a, long long int b) {
	long long int mod = a % b;
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

	long long int n, m;
	cin >> n >> m;
	cout << (n * m) / mod(n, m);
}