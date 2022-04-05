#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	getline(cin, str);
	string ucpc = "";
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'U' && cnt == 0) {
			ucpc += 'U';
			cnt++;
		}
		else if (str[i] == 'C') {
			if (cnt == 1) {
				ucpc += 'C';
				cnt++;
			}
			else if (cnt == 3) {
				ucpc += 'C';
				cnt++;
			}
		}
		else if (str[i] == 'P' && cnt == 2) {
			ucpc += 'P';
			cnt++;
		}

	}
	if (ucpc == "UCPC")	cout << "I love UCPC";
	else cout << "I hate UCPC";
}