#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<string, int>a, pair<string, int>b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<string, int>>list;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		list.push_back(make_pair(str, str.length()));
	}
	sort(list.begin(), list.end(), cmp);
	for (int i = 0; i < list.size(); i++) {
		if (i == list.size() - 1) {
			cout << list[i].first << "\n";
			break;
		}
		if (list[i].first == list[i + 1].first) continue;
		else cout << list[i].first << "\n";
	}
}