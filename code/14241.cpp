#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, sum = 0;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>pq;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		pq.push(num);
	}
	while (1) {
		if (pq.size() == 1)	break;
		int num1 = pq.top();
		pq.pop();
		int num2 = pq.top();
		pq.pop();
		sum += num1 * num2;
		pq.push(num1 + num2);
	}
	cout << sum;
}