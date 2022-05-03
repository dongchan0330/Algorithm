#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
#define N 10000
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
	for (int i = 2; i <= N; i++) {
		if (!IsNotPrime[i])	prime.push_back(i);
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 0)	break;
		int tmp1, tmp2;
		unsigned int min = 10000;
		for (int i = 0; i < prime.size(); i++) {
			if (!IsNotPrime[n - prime[i]] && n - prime[i] > -1 && min > prime[i] - (n - prime[i])) {
				min = prime[i] - (n - prime[i]);
				tmp1 = n - prime[i], tmp2 = prime[i];
			}
		}
		cout << tmp1 << " " << tmp2 << "\n";
	}
}
