#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b) {
	return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<pair<int, int>>list(8);
	for (int i = 0; i < 8; i++) {
		int num;
		cin >> num;
		list.push_back(make_pair(num, i + 1));
	}
	sort(list.begin(), list.end());
	vector<pair<int, int>>score(5);
	int sum = 0;
	for (int i = list.size() - 1; i > list.size() - 6; i--) {
		sum += list[i].first;
		score.push_back(make_pair(list[i].first, list[i].second));
	}
	sort(score.begin(), score.end(), cmp);
	cout << sum << "\n";
	for (int i = 0; i < score.size(); i++) {
		if (score[i].second != 0)	cout << score[i].second << " ";
	}
}