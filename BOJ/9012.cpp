#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;
string VPS(string str) {
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			cnt += 1;
		}
		else {
			cnt -= 1;
		}
		if (cnt < 0) {
			return "NO";
		}
	}
	if (cnt == 0) {
		return "YES";
	}
	else {
		return "NO";
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		cout << VPS(str) << "\n";
	}
}