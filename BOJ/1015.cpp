#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>>list;
	int arr_list[1001] = { 0, };
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		list.push_back(make_pair(num, i));

	}
	sort(list.begin(), list.end());
	for (int i = 0; i < n; i++) {
		arr_list[list[i].second] = i;
	}
	for (int i = 0; i < n; i++) cout << arr_list[i] << " ";

}