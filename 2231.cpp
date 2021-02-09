#include <iostream>

using namespace std;

int main()
{
	int n, m = 0;
	int calcVar = 0;
	int sum = 0;

	cin >> n;

	while (m < n) {
		calcVar = m;

		while (calcVar != 0) {
			sum += calcVar % 10;
			calcVar = calcVar / 10;
		}

		if (m + sum == n) {
			cout << m;
			return 0;
		}

		m++;
		sum = 0;
	}

	cout << 0;


	return 0;
}
