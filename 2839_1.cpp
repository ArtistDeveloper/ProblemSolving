#include <iostream>

int main()
{
	int n;
	int cnt_3 = 0;
	int cnt_5 = 0;

	std::cin >> n;
	//n이 5로 나누어 떨어지지 않으면.
	while (n % 5 != 0) {
		n = n - 3;
		cnt_3++;

		if (n < 3 && n != 0) {
			printf("-1");
			return 0;
		}
	}

	cnt_5 = n / 5;
	printf("%d", cnt_5 + cnt_3);

	return 0;
}
