#include <iostream>
using namespace std;
bool a[15][15];
int n;
bool check_col[15];
bool check_dig1[40];
bool check_dig2[40];
bool check(int row, int col) {
	if (check_col[col]) 	return false;		//퀀이 col열에 놓을 경우
	if (check_dig1[row + col])	return false;	//퀀이 /대각선에 놓을 경우 
	if (check_dig2[row - col + n])	return false;	//퀸이 \대각선에 놓을 경우
	return true;
}
int calc(int row) {
	if (row == n) {
		return 1;
	}
	int cnt = 0;
	for (int col = 0; col < n; col++) {
		if (check(row, col)) {
			check_dig1[row + col] = true;		//퀀을 놓았을 경우 true
			check_dig2[row - col + n] = true;
			check_col[col] = true;
			a[row][col] = true;
			cnt += calc(row + 1);
			check_dig1[row + col] = false;		//원위치
			check_dig2[row - col + n] = false;
			check_col[col] = false;
			a[row][col] = false;
		}
	}
	return cnt;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	cout << calc(0) << "\n";
}