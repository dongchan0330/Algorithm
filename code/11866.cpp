#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	queue<int>q;
	for (int i = 1; i <= n; i++)	q.push(i);
	cout << "<";
	for (int i = 1; !q.empty(); i++) {
		if (i % m == 0) {
			if (q.size() == 1)	cout << q.front();
			else cout << q.front() << ", ";
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	cout << ">";
}