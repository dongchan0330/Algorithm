#include <iostream>
using namespace std;
long long int num1, num2, num3;
long long int pow(int a, int b, int c) {
	if (b == 0)	return 1;
	long long int tmp = pow(a, b / 2, c);
	tmp = tmp * tmp % c;
	if (b % 2 == 0)	return tmp;
	else return tmp * a % c;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> num1 >> num2 >> num3;
	cout << pow(num1, num2, num3);
}