#include <iostream>
#include <vector>
using namespace std;
long long int mod(int a, int b) {
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

	int t;
	cin >> t;
	while (t--) {
		int n;
		vector<long long int>v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		long long int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += mod(v[i], v[j]);
			}
		}
		cout << sum << "\n";
	}
}