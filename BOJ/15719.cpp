#include <iostream>
using namespace std;
bool arr[10000001];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (arr[tmp - 1]) {
			cout << tmp;
			break;
		}
		else arr[tmp - 1] = true;
	}
}