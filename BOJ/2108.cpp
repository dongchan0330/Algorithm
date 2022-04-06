#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, index = 0, max = 0;
	int sum = 0;
	int arr[8001] = { 0, };
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum += num;
		if (num <= 0)	index = -num;
		else index = 4000 + num;
		arr[index]++;

		if (arr[index] > max)	max = arr[index];
		v.push_back(num);
	}
	float avg = sum / (float)n;
	sort(v.begin(), v.end());
	bool flag = false;
	int res = 0;
	for (int i = -4000; i < 4001; i++) {
		if (i <= 0)	index = -i;
		else index = 4000 + i;
		if (arr[index] == max) {
			res = i;
			if (flag)	break;
			flag = true;
		}
	}
	if (round(avg) == -0)	cout << "0" << "\n";
	else cout << round(avg) << "\n";
	cout << v[n / 2] << "\n";
	cout << res << "\n";
	cout << v.back() - v.front() << "\n";
}