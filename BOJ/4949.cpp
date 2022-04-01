#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (;;) {
		string str;
		getline(cin, str);

		if (str[0] == '.')	break;
		bool check = false;
		stack <char> s;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[')	s.push(str[i]);
			else if (str[i] == ')') {
				if (s.size() > 0 && s.top() == '(') s.pop();
				else {
					check = true;
					break;
				}
			}
			else if (str[i] == ']') {
				if (s.size() > 0 && s.top() == '[')	s.pop();
				else {
					check = true;
					break;
				}
			}
		}
		if (s.empty() && !check)	cout << "yes" << endl;
		else cout << "no" << endl;
	}
}