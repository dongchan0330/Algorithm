#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int size = 4 * n - 3;
	char star[401][401];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			star[i][j] = ' ';
		}
	}
	int start = 0, end = 4 * n - 4;
	for (int i = 0; i < size; i++) {
		for (int j = start; j <= end; j++) {
			star[start][j] = '*';
			star[j][start] = '*';
			star[j][end] = '*';
			star[end][j] = '*';
		}
		start += 2;
		end -= 2;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << star[i][j];
		}
		cout << "\n";
	}
}