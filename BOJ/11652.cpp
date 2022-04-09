#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0, max = 0;
	vector<long long int>list;
	for (int i = 0; i < n; i++) {
		long long int num;
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	long long int tmp = list[0];
	for (int i = 1; i < list.size(); i++) {
		if (list[i] == list[i - 1])	cnt++;
		else cnt = 0;
		if (cnt > max) {
			max = cnt;
			tmp = list[i];
		}
	}
	cout << tmp;
}