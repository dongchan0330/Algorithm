#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[1001] = { 0, };
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}