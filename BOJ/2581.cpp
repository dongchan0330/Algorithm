#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
bool isprime(int n) {
	if (n == 1)	return false;
	for (int i = 2; i <= sqrt(n); i++)	if ((n % i) == 0)	return false;
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int>list;
	int sum = 0;
	for (int i = n; i <= m; i++) {
		if (isprime(i)) {
			list.push_back(i);
			sum += i;
		}
	}
	sort(list.begin(), list.end());
	if (!list.empty())	cout << sum << "\n" << list[0];
	else cout << "-1";
}