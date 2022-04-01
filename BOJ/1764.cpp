#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m, cnt = 0;
	cin >> n >> m;
	vector<string>str1_v;
	vector<string>str2_v;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		str1_v.push_back(str);
	}
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		str1_v.push_back(str);
	}
	sort(str1_v.begin(), str1_v.end());
	for (int i = 0; i < str1_v.size(); i++) {
		if (i == str1_v.size() - 1)	break;
		if (str1_v[i] == str1_v[i + 1]) {
			cnt++;
			str2_v.push_back(str1_v[i]);
		}
	}
	cout << cnt << "\n";
	for (string i : str2_v)cout << i << "\n";
}