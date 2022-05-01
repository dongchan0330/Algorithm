#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;
	cout << "1" << "\n";
	for (int i = 2; i <= 10000; i++) {
		bool flag = false;
		for (int j = i - 1; j > 0; j--) {
			sum = j;
			int tmp = j;
			int tmp2 = 0;
			for (int k = 1; k <= to_string(j).size(); k++) {
				tmp2 = tmp % 10;
				sum += tmp2;
				tmp /= 10;
			}
			if (i == sum) {
				flag = true;
				break;
			}
		}
		if (!flag)	cout << i << "\n";
	}
}