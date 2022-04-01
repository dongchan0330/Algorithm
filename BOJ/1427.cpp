#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str1;
	string str2;
	cin >> str1;
	vector<int>v;
	for (int i = 0; i < str1.length(); i++) {
		str2 += str1[i];
		v.push_back(stoi(str2));
		str2 = "";
	}
	sort(v.begin(), v.end(), cmp);
	for (int i : v)	cout << i;
}