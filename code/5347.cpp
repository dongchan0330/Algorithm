#include <iostream>
using namespace std;
unsigned long long mod(int a, int b) {
	unsigned long long mod = a % b;
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
	while (n--) {
		unsigned long long a, b;
		cin >> a >> b;
		unsigned long long mul = a * b;
		unsigned long long lcm = mul / mod(a, b);
		cout << lcm << "\n";
	}
}