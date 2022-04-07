#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int>list;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	cout << list[0 + k - 1];
}