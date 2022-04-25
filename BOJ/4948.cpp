#include <iostream>
#include <math.h>
using namespace std;
# define N 246912
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
	while (1) {
		int n;
		cin >> n;
		if (n == 0)	break;
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (!IsNotPrime[i])	cnt++;
		}
		cout << cnt << "\n";
	}
}