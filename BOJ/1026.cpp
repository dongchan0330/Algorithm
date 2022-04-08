#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int>list_a;
	vector<int>list_b;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list_a.push_back(num);
	}
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list_b.push_back(num);
	}
	sort(list_a.begin(), list_a.end());
	sort(list_b.begin(), list_b.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		res += list_a[i] * list_b[i];
	}
	cout << res;
}