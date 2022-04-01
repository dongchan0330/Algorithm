#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		stack <char> s;
		for (int j = 0; j < str.length(); j++) {
			if (s.empty())	s.push(str[j]);
			else {
				if (s.top() == str[j])	s.pop();
				else {
					s.push(str[j]);
				}
			}

		}
		if (s.empty())	cnt++;
	}
	cout << cnt << endl;
}