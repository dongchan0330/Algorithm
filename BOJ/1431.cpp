#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
bool cmp(string a, string b) {
	if (a.length() != b.length())	return a.length() < b.length();
	else {
		int sum_a = 0;
		int sum_b = 0;
		for (int i = 0; i < a.length(); i++) {
			if (1 <= a[i] - '0' && a[i] - '0' <= 9)	sum_a += a[i] - '0';
			if (1 <= b[i] - '0' && b[i] - '0' <= 9)	sum_b += b[i] - '0';
		}
		if (sum_a != sum_b)	return sum_a < sum_b;
	}
	return a < b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<string>list;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;;
		list.push_back(str);
	}
	sort(list.begin(), list.end(), cmp);
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << "\n";
	}
}