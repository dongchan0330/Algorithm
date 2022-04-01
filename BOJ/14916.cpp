#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int coin, cnt = 0;
	bool check = true;
	cin >> coin;
	while (1) {
		if (coin < 1)	break;
		if (coin % 5 == 0 && coin > 1) {
			coin -= 5;
			cnt++;
			check = true;
		}
		else if (coin % 5 != 0 && coin > 1) {
			coin -= 2;
			cnt++;
			check = true;
		}
		else {
			check = false;
			break;
		}

	}
	if (check)	cout << cnt;
	else cout << "-1";
}