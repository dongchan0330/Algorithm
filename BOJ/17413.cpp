#include <iostream>
#include <string>
#include <stack>
#pragma warning<disable:4996>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<char>s;
	string str;
	bool tag = false;
	getline(cin, str);

	for (char ch : str) {
		if (ch == '<') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			tag = true;
			cout << ch;
		}
		else if (ch == '>') {
			tag = false;
			cout << ch;
		}
		else if (tag) {
			cout << ch;
		}
		else {
			if (ch == ' ') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else {
				s.push(ch);
			}

		}

	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << "\n";
}