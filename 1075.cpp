#include <iostream>;

using namespace std;

int main()
{
	//N은 100보다 크거나 같다. F는 100보다 작거나 같다.
	int n;
	int divisior;
	int result;

	cin >> n;
	cin >> divisior;

	n = (n / 100) * 100; // n뒤에 두자리 00으로 만들기

	for (int i = 0; i < 100; i++) {
		if (n % divisior == 0) {
			break;
		}
		n++;
	}

	result = n % 100;

	if (result < 10) {
		cout << 0;
		cout << result;
	}

	else {
		cout << result;
	}

	return 0;
}