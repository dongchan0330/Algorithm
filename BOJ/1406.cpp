#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	cin >> str;
	stack<char> l_cursor;
	stack<char> r_cursor;
	for (int i = 0; i < str.length(); i++) l_cursor.push(str[i]);
	int n;
	cin >> n;
	while (n--) {
		char cmd;
		cin >> cmd;
		if (cmd == 'P') {
			char ch;
			cin >> ch;
			l_cursor.push(ch);
		}
		else if (cmd == 'L') {
			if (l_cursor.empty())	continue;
			else {
				r_cursor.push(l_cursor.top());
				l_cursor.pop();
			}
		}
		else if (cmd == 'B') {
			if (l_cursor.empty())	continue;
			else {
				l_cursor.pop();
			}
		}
		else if (cmd == 'D') {
			if (r_cursor.empty())	continue;
			else {
				l_cursor.push(r_cursor.top());
				r_cursor.pop();
			}
		}
	}
	while (!l_cursor.empty()) {
		r_cursor.push(l_cursor.top());
		l_cursor.pop();
	}
	while (!r_cursor.empty()) {
		cout << r_cursor.top();
		r_cursor.pop();
	}
}