#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int order[100000];
queue<int> q;
stack<int> st;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order[i];
	}
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (order[i] == 0) {
			st.push(k);
		}
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		q.push(k);
	}
	for (int i = 0; i < m; i++) {
		if (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}
		else {
			cout << q.front() << " ";
			q.pop();
		}
	}
}