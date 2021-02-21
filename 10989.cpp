#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int check[10001];

int main()
{
	int test_case;
	int num;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		//cin >> num;
		scanf("%d", &num);
		check[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < check[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}
