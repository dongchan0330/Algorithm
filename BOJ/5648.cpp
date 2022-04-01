#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<long long int>v;
	for (int i = 0; i < n; i++) {
		long long int num;
		cin >> num;
		string str;
		for (int j = to_string(num).length() - 1; j >= 0; j--) {
			str += to_string(num)[j];
		}
		v.push_back(stoll(str));
	}
	sort(v.begin(), v.end());
	for (long long int i : v) {
		cout << i << "\n";
	}
}