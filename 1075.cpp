#include <iostream>;

using namespace std;

int main()
{
	//N�� 100���� ũ�ų� ����. F�� 100���� �۰ų� ����.
	int n;
	int divisior;
	int result;

	cin >> n;
	cin >> divisior;

	n = (n / 100) * 100; // n�ڿ� ���ڸ� 00���� �����

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