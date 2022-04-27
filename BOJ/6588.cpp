#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
#define N 1000000
bool IsNotPrime[N + 1] = { false, };
void isprime() {
	IsNotPrime[0] = IsNotPrime[1] = true;
	for (int i = 2; i < sqrt(N); i++) {
		if (!IsNotPrime[i]) {
			for (int j = i * i; j <= N; j += i) {
				IsNotPrime[j] = true;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	isprime();
	vector<int>prime;
	for (int i = 3; i <= N; i++) {
		if (!IsNotPrime[i])	prime.push_back(i);
	}
	while (1) {
		int n;
		cin >> n;
		if (n == 0)	break;

		int cnt = 0;
		bool flag = false;
		int tmp1, tmp2;

		for (int i = 0; i < prime.size(); i++) {
			if (!IsNotPrime[n - prime[i]] && n - prime[i] > 2) {
				tmp1 = n - prime[i], tmp2 = prime[i];
				flag = true;
				break;
			}
		}
		if (flag)	 cout << n << " = " << tmp2 << " + " << tmp1 << "\n";
		else	cout << "Goldbach's conjecture is wrong.\n";
	}
}
