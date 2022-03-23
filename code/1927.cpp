#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>>pq;	//우선수위 큐(정렬을 통해 작은 순위가 우선으로)

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0 && pq.empty())	cout << "0\n";
		else if (num == 0) {
			cout << pq.top() << "\n";
			pq.pop();
		}
		else  pq.push(num);
	}
}