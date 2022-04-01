#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	long long int sum = 0;
	cin >> n >> m;
	priority_queue<long long int, vector<long long int>, greater<long long int>>pq;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		pq.push(num);
	}
	for (int i = 0; i < m; i++) {
		long long int num1 = pq.top();
		pq.pop();
		long long int num2 = pq.top();
		pq.pop();
		pq.push(num1 + num2);
		pq.push(num1 + num2);

	}
	while (!pq.empty()) {
		long long int num1 = pq.top();
		pq.pop();
		sum += num1;
	}
	cout << sum;
}