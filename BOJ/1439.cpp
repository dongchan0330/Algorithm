#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;
	int zero_cnt = 0, one_cnt = 0;

	if (str[0] == '0')	zero_cnt++;
	else one_cnt++;

	for (int i = 1; i < str.length(); i++) {
		if (str[i] == '0' && str[i - 1] != str[i])	zero_cnt++;
		else if (str[i] == '1' && str[i - 1] != str[i])	one_cnt++;
	}

	if (zero_cnt <= one_cnt)	cout << zero_cnt;
	else cout << one_cnt;
}