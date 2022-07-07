#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	int sum = 0;
	string num;
	bool flag = false;

	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '-' || str[i] == '+' || i == str.size()) {
			if (flag) {
				sum -= stoi(num);
				num = "";
			}
			else {
				sum += stoi(num);
				num = "";
			}
		}
		else {
			num += str[i];
		}
		if (str[i] == '-')	flag = true;
	}
	cout << sum;
}