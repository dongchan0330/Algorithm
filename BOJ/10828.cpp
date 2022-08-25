#include <iostream>
#include <stack>
#pragma warning(disable:4996)
using namespace std;
struct Stack {
	int stack[10000];
	int size = 0;
	void push(int data) {
		stack[size] = data;
		size += 1;
	}
	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			size -= 1;
			return stack[size - 1];
		}
	}
	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return stack[size - 1];
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string cmd;
	Stack s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "top") {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
		else if (cmd == "size") {
			cout << s.size << "\n";
		}
		else if (cmd == "empty") {
			cout << s.empty() << "\n";
		}
		else if (cmd == "pop") {
			if (s.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
			if (!s.empty()) {
				s.pop();

			}
		}
	}

}