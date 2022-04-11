#include <iostream>
using namespace std;
int main() {
	int price[11];
	int sum_price = 0, sum = 0, result;
	cin >> sum_price;
	for (int i = 0; i < 9; i++) {
		cin >> price[i];
		sum += price[i];
	}
	cout << sum_price - sum << "\n";
}