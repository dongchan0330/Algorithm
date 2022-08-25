#include <iostream>
using namespace std;
int main() {
	int n, p1, p2, cnt = 0;
	cin >> n >> p1 >> p2;

	while (p1 != p2) {
		p1 = p1 - p1 / 2;
		p2 = p2 - p2 / 2;
		cnt++;
	}
	cout << cnt;
}