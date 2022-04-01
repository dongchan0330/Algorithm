#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, k, cnt = 0, sum = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	cin >> k;
	sort(v.begin(), v.end());
	int begin = 0, end = n - 1;
	while (1) {
		if (begin >= end)	break;
		sum = v[begin] + v[end];
		if (sum == k) {
			cnt++;
			begin++;
			end--;
		}
		else if (sum < k)	begin++;
		else end--;
	}
	cout << cnt;
}