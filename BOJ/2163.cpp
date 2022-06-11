#include <iostream>
using namespace std;
int cnt = 0;
int go(int x) {
	if (x == 1)	return 0;
	x = x / 2;
	cnt++;
	go(x);
	return cnt;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int total = n * m;

	cout << go(total) << "\n";
}