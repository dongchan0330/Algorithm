#include <iostream>
#include <algorithm>
using namespace std;
long long int dis[100001];
long long int pri[100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++)	cin >> dis[i];
	for (int i = 0; i < n; i++)	cin >> pri[i];

	long long int max = 1000000000;
	long long int sum = 0;

	for (int i = 0; i < n; i++) {
		if (pri[i] < max)	max = pri[i];
		sum += max * dis[i];
	}
	cout << sum;
}