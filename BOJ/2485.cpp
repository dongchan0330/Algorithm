#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, arr[100001];
vector<int>v;
int gcd(int a, int b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)	cin >> arr[i];
	sort(arr, arr + n);

	int tmp, cnt = 0;
	for (int i = 0; i < n - 1; i++)	v.push_back(arr[i + 1] - arr[i]);
	tmp = gcd(v[0], v[1]);
	for (int i = 2; i < n - 1; i++)	tmp = gcd(tmp, v[i]);
	for (int i = 0; i < n - 1; i++)	cnt += v[i] / tmp - 1;

	cout << cnt;
}