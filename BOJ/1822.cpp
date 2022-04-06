#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	int a_cnt = 0;
	cin >> n >> m;
	set<int>s;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(num);
	}
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		auto it = s.find(num);
		if (it != s.end())	s.erase(it);
	}
	cout << s.size() << "\n";
	for (auto i : s)	cout << i << " ";
}