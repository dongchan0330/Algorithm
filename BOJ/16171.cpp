#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	cin >> str1 >> str2;

	string remove = "";
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] - '0' >= 0 && str1[i] - '0' <= 9)	continue;
		remove.push_back(str1[i]);
	}
	if (remove.find(str2) == string::npos)	cout << 0;
	else cout << 1;

}