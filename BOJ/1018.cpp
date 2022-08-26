#include<iostream>
#include<algorithm>
using namespace std;

int chess[51][51];

int check(int x, int y)
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) cnt1++;
			if ((i + j + 1) % 2 == chess[i][j]) cnt2++;
		}
	}

	return min(cnt1, cnt2);
}

int main()
{
	int n, m;
	int min = 2501;
	char c;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;
			if (c == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			if (min > check(i, j)) min = check(i, j);
		}
	}

	cout << min;
}
