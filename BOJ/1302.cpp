#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<string, int>a, pair<string, int>b) {
	if (a.second == b.second)	return a.first < b.first;
	return a.second > b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<string>list;
	vector<pair<string, int>>max_list;
	int cnt = 0, max = 0;;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		list.push_back(str);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++) {
		if (list.size() == 1) {
			cnt++;
			max_list.push_back({ list[i], cnt });
			break;
		}
		if (i == list.size() - 1) {
			if (list[i] == list[i - 1]) {
				cnt++;
				max_list.push_back({ list[i], cnt });
				break;
			}
			else break;
		}
		if (list[i] == list[i + 1]) cnt++;
		else {
			cnt++;
			max_list.push_back({ list[i], cnt });
			cnt = 0;
		}
	}
	sort(max_list.begin(), max_list.end(), cmp);
	cout << max_list[0].first << "\n";

}