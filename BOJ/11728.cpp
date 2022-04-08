#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int>list_a;
	vector<int>list_b;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list_a.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		list_a.push_back(num);
	}
	sort(list_a.begin(), list_a.end());
	for (int i : list_a) cout << i << " ";
}