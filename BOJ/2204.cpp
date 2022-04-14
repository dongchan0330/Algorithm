#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
bool cmp(string a, string b) {
	for (int i = 0; i < a.size(); i++) {
		if (isupper(a[i]) != 0)	a[i] = tolower(a[i]);
	}
	for (int i = 0; i < b.size(); i++) {
		if (isupper(b[i]) != 0)	b[i] = tolower(b[i]);
	}
	if (a.compare(b) > 0)	return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	while (1) {
		cin >> t;
		if (t == 0)	break;
		vector<string>list;
		for (int i = 0; i < t; i++) {
			string str;
			cin >> str;
			list.push_back(str);
		}
		sort(list.begin(), list.end(), cmp);
		cout << list[0] << "\n";
	}
}