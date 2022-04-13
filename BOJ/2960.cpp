#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool isprime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if ((n % i) == 0)	return false;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int>list;
	vector<int>save_list;
	for (int i = 2; i <= n; i++)	list.push_back(i);
	int num = 2;
	while (1) {
		if (save_list.size() == n - 1)	break;
		if (isprime(num)) {
			for (int i = 0; i < list.size(); i++) {
				if (list[i] % num == 0 && list[i] != 0) {
					save_list.push_back(list[i]);
					list[i] = 0;
				}
			}
		}
		num++;
	}
	cout << save_list[k - 1];
}