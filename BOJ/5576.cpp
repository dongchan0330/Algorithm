#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int w_uni[10];
	int k_uni[10];
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		w_uni[i] = num;
	}
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		k_uni[i] = num;
	}
	sort(w_uni, w_uni + 10, greater<int>());
	sort(k_uni, k_uni + 10, greater<int>());
	cout << w_uni[0] + w_uni[1] + w_uni[2] << " " << k_uni[0] + k_uni[1] + k_uni[2];
}