#include <iostream>
#include <stack>
#pragma warning(disable:4996)
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, num, sum = 0;
	stack<int>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	while (!s.empty()) {
		int top = s.top();
		sum += top;
		s.pop();
	}
	cout << sum;
}