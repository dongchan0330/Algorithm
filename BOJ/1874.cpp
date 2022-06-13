#include <iostream>
#include <stack>
#include <string>
#pragma warning(disable:4996)
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<int>s;
	int n, cnt = 0;
	int num;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > cnt) {
			while (num > cnt) {
				s.push(++cnt);
				str += '+';
			}
			s.pop();
			str += '-';
		}
		else {
			bool found = false;
			if (!s.empty()) {
				int top = s.top();
				s.pop();
				str += '-';
				if (num == top) {
					found = true;
				}
			}
			if (!found) {
				cout << "NO" << "\n";
				return 0;
			}
		}
	}

	for (auto x : str) {
		cout << x << "\n";
	}

	return 0;
}