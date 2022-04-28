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
	int t;
	cin >> t;
	vector<int>prime;
	for (int i = 2; i <= N; i++) {
		if (!IsNotPrime[i]) prime.push_back(i);
	}
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		for (int i = 0; i < prime.size(); i++) {
			if (n - prime[i] < 0)	break;
			if (!IsNotPrime[n - prime[i]]) {
				cnt++;
			}
		}
		if (cnt % 2 == 0)	cout << cnt / 2 << "\n";
		else cout << cnt / 2 + 1 << "\n";
	}
}