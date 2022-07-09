#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, begin, end;
	int cnt = 1;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> begin >> end;
		v.push_back(make_pair(end, begin));
	}
	sort(v.begin(), v.end());
	int time = v[0].first;
	for (int i = 1; i < n; i++) {
		if (time <= v[i].second) {
			cnt++;
			time = v[i].first;
		}
	}
	cout << cnt;
}