#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m, ipt, cnt = 0;
		cin >> n >> m;
		queue<pair<int, int>>q;
		priority_queue<int>pq;
		for (int i = 0; i < n; i++) {
			cin >> ipt;
			q.push({ i,ipt });
			pq.push(ipt);
		}
		while (!q.empty()) {
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();
			if (pq.top() == val) {
				pq.pop();
				cnt++;
				if (idx == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else q.push({ idx,val });
		}
	}
}