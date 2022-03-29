#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	if (n < 0 && m < 0) {
		cout << "3" << "\n";
	}
	else if (n < 0 && m>0) {
		cout << "2" << "\n";
	}
	else if (n > 0 && m > 0) {
		cout << "1" << "\n";
	}
	else if (n > 0 && m < 0) {
		cout << "4" << "\n";
	}
}