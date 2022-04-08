#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
bool cmp(tuple<int, string, int>a, tuple<int, string, int>b) {
	if (get<0>(a) == get<0>(b))	return get<2>(a) < get<2>(b);
	return get<0>(a) < get<0>(b);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, cnt = 1;
	cin >> n;
	vector<tuple<int, string, int>>list;
	for (int i = 0; i < n; i++) {
		int num;
		string name;
		cin >> num >> name;
		list.push_back(make_tuple(num, name, cnt));
		cnt++;
	}
	sort(list.begin(), list.end(), cmp);
	for (int i = 0; i < list.size(); i++) {
		cout << get<0>(list[i]) << " " << get<1>(list[i]) << "\n";
	}
}