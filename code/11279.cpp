#include<iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	priority_queue<int> pq;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0 && pq.empty())	cout << "0\n";
		else if (num == 0) {
			cout << pq.top() << "\n";
			pq.pop();
		}
		pq.push(num);
	}
}