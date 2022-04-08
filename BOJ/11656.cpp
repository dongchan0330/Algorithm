#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;
	vector<string>list;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		list.push_back(str);
		str.erase(str.begin());
	}
	sort(list.begin(), list.end());
	for (string i : list)cout << i << "\n";
}