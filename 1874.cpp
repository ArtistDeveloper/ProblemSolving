#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n, input, max = 0;
	cin >> n;
	stack<int> stk;
	string result = "";
	
	for (int loop = 0; loop < n; loop++) {
		cin >> input;

		//이때까지 나왔던 가장 큰 숫자(max)보다 입력값이 크면 push.
		if (input > max) {
			for (int i = max + 1; i < input + 1; i++) {
				stk.push(i);
				max = i;
				result += "+\n";
			}
			stk.pop();
			result += "-\n";
		}

		else {
			if (stk.top() == input) {
				stk.pop();
				result += "-\n";
			}

			else {
				printf("NO");
				return 0;
			}
		}
	}

	cout << result;
	
	return 0;
}
