#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int min = 1000001;
	int sum;
	for (int i = n - 1; i > 0; i--) {
		sum = i;
		int tmp = i;
		int tmp2 = 0;
		for (int k = 1; k <= to_string(n).size(); k++) {
			tmp2 = tmp % 10;
			sum += tmp2;
			tmp /= 10;
		}
		if (n == sum) {
			if (i < min)	min = i;
		}

	}
	if (min == 1000001) cout << "0";
	else cout << min;
}