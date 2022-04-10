#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		vector<int>list(10);
		for (int i = 0; i < 10; i++) {
			int num;
			cin >> num;
			list[i] = num;
		}
		sort(list.begin(), list.end(), greater<int>());
		cout << list[2] << "\n";
	}
}