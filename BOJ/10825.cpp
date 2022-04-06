#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
bool cmp(tuple<string, int, int, int>a, tuple<string, int, int, int>b) {
	if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) == get<3>(b))	return get<0>(a) < get<0>(b);
	if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b))	return get<3>(a) > get<3>(b);
	if (get<1>(a) == get<1>(b))	return get<2>(a) < get<2>(b);
	return get<1>(a) > get<1>(b);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<tuple<string, int, int, int>>stu;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		int k, e, m;
		cin >> name >> k >> e >> m;
		stu.push_back(make_tuple(name, k, e, m));
	}
	sort(stu.begin(), stu.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << get<0>(stu[i]) << "\n";
	}
}