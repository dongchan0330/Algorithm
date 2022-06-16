#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool pal(string a) {
	bool ispal = false;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == a[a.length() - 1 - i])	ispal = true;
		else return false;
	}
	if (ispal)	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0;
		string arr[101];
		vector<string> str;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (j == k)	continue;
				string check_str = arr[j] + arr[k];
				if (pal(check_str)) {
					str.push_back(check_str);
					cnt++;
				}
			}
		}
		if (cnt == 0)	cout << "0" << "\n";
		else cout << str[0] << "\n";
	}


}