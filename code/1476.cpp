#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int E, S, M, year = 1;
	cin >> E >> S >> M;
	while (1) {
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)	break;	//	year - E : 15�� ���, year - S : 28�� ��� , year - M : 19�� ��� 
		year++;
	}
	cout << year;
}