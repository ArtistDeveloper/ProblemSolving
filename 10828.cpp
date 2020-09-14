#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n, value;
	string oper;
	stack<int> stk;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> oper;
		if (oper == "push") {
			cin >> value;
			stk.push(value);
		}

		else if (oper == "pop") {
			if (true == stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
				stk.pop();
			}
		}

		else if (oper == "top") {
			if (true == stk.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << stk.top() << endl;
			}
		}

		else if (oper == "size") {
			cout << stk.size() << endl;
		}

		else if (oper == "empty") {
			if (true == stk.empty()) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
	}

	return 0;
}
