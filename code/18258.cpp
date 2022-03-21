#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	queue<int>q;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			if (q.size() == 0)	cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << "\n";
		}
		else if (cmd == "front") {
			if (q.size() == 0)	cout << "-1\n";
			else {
				cout << q.front() << "\n";
			}
		}
		else if (cmd == "back") {
			if (q.size() == 0)	cout << "-1" << "\n";
			else {
				cout << q.back() << "\n";
			}
		}
		else if (cmd == "empty") {
			cout << q.empty() << "\n";
		}

	}
}