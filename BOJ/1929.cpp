#include <iostream>
#include <vector>
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
	while (n != m + 1) {
		if (isprime(n))	cout << n << "\n";
		n++;
	}
}