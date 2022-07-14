#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int cnt = 0;
	while (n--) {
		string str;
		bool isGroup = true;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < i; j++) {
				if (str[i] != str[i - 1] && str[i] == str[j]) {
					isGroup = false;
					break;
				}

			}
		}
		if (isGroup)	cnt++;
	}
	cout << cnt;
}