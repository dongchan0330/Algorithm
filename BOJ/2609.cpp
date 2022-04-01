#include <iostream>
using namespace std;
int mod(int n, int m) {
	int mod = n % m;
	while (mod > 0) {
		n = m;
		m = mod;
		mod = n % m;
	}
	return m;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	cout << mod(n, m) << "\n";
	cout << (n * m) / mod(n, m);

}