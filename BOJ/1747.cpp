#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define N 1010000
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
	int n;
	cin >> n;
	vector<int>prime;
	for (int i = n; i <= N; i++) {
		if (!IsNotPrime[i])	prime.push_back(i);
	}
	for (int k = 0; k < prime.size(); k++) {
		if (prime[k] < 10) {
			cout << prime[k];
			break;
		}
		string str = to_string(prime[k]);
		bool flag = false;
		for (int i = 0; i < str.size() / 2; i++) {
			if (str[i] == str[str.size() - i - 1]) {
				flag = true;
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << str;
			break;
		}

	}

}