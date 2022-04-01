#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;
int mod(int a, int b) {
	int mod = a % b;
	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	char str[31];
	cin >> str;
	int a = stoi(strtok(str, ":"));
	int b = stoi(strtok(NULL, ":"));

	cout << a / mod(a, b) << ":" << b / mod(a, b);
}