#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int n;
	int cnt = 0, num = 1;
	cin >> n;
	long long int sum = 0;
	while (1) {
		sum += num;
		cnt++;

		if (n < sum) {
			cnt--;
			break;
		}
		num++;
	}
	cout << cnt;
}