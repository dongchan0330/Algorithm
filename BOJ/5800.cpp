#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k, n;
	cin >> k;
	for (int i = 0; i < k; i++) {
		vector <int> list;
		int max = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			list.push_back(num);
		}
		sort(list.begin(), list.end(), greater<int>());
		for (int j = 0; j < list.size(); j++) {
			if (j == list.size() - 1)	break;
			if (list[j] - list[j + 1] > max)	max = list[j] - list[j + 1];
		}
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << list.front() << ", Min " << list.back() << ", Largest gap " << max << "\n";
		list.clear();
	}
}