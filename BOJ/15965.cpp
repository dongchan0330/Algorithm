#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
#define N 7368787
bool IsNotPrime[N] = { false, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int check = 0;
	cin >> n;
	for (int i = 2; i < sqrt(N); i++) {
		if (!IsNotPrime[i]) {
			for (int j = i * i; j <= N; j += i) {
				IsNotPrime[j] = true;
			}
		}
	}
	for (int i = 2; i <= N; i++) {
		if (!IsNotPrime[i]) check++;
		if (check == n) {
			cout << i << "\n";
			break;
		}
	}
}