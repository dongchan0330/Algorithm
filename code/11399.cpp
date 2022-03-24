#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, sum = 0;
	cin >> n;
	vector<int>bank;
	vector<int>bank_sum;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		bank.push_back(num);
	}
	sort(bank.begin(), bank.end());
	for (int i = 0; i < bank.size(); i++) {
		sum += bank[i];
		bank_sum.push_back(sum);
	}
	sum = 0;
	for (int i : bank_sum) {
		sum += i;
	}
	cout << sum;
}