#include <iostream>
using namespace std;
int n, m;
string a[20];
int dx[4] = { 0,0,1,-1 };	//��,��,��,��
int dy[4] = { 1,-1,0,0 };
int go(int step, int x1, int y1, int x2, int y2) {
	if (step == 11) {
		return -1;
	}
	bool fall1 = false, fall2 = false;
	if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= m)	fall1 = true;	//ù��° ������ ���忡 ����������
	if (x2 < 0 || x2 >= n || y2 < 0 || y2 >= m)	fall2 = true;	//�ι�° ������ ���忡 ����������
	if (fall1 && fall2)	return -1;		//�� ������ ��� �������� �Ұ���
	if (fall1 || fall2)	return step;	//�� �߿� �ϳ��� �������� �ּ� ���� ��ȯ
	int ans = -1;
	for (int i = 0; i < 4; i++) {
		int nx1 = x1 + dx[i];
		int ny1 = y1 + dy[i];
		int nx2 = x2 + dx[i];
		int ny2 = y2 + dy[i];
		if (0 <= nx1 && nx1 < n && 0 <= ny1 && ny1 < m && a[nx1][ny1] == '#') {	//�̵��Ϸ��� ĭ�� ��(#)�̸� �̵����� ����
			nx1 = x1;	//�̵��Ϸ��� ĭ�� ���� ĭ���� 
			ny1 = y1;
		}
		if (0 <= nx2 && nx2 < n && 0 <= ny2 && ny2 < m && a[nx2][ny2] == '#') {
			nx2 = x2;
			ny2 = y2;
		}
		int temp = go(step + 1, nx1, ny1, nx2, ny2);
		if (temp == -1)	continue;
		if (ans == -1 || ans > temp) {
			ans = temp;
		}
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	int x1, y1, x2, y2;
	x1 = y1 = x2 = y2 = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'o') {
				if (x1 == -1) {
					x1 = i;
					y1 = j;
				}
				else {
					x2 = i;
					y2 = j;
				}
				a[i][j] = '.';
			}
		}
	}
	cout << go(0, x1, y1, x2, y2) << "\n";
}