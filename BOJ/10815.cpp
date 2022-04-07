#include <iostream>
#include <set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n;
	set<int>s;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(num);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		auto it = s.find(num);
		if (it == s.end())	cout << "0 ";
		else cout << "1 ";
	}
}