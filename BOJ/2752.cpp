#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int arr[3];
	for (int i = 0; i < 3; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
}