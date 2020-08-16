#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <cstdio>

int main()
{
	int a, b, temp;
	int x, y;
	scanf("%d %d", &a, &b);
	x = a;
	y = b;

	while(TRUE) {
		if (a % b != 0) {
			temp = a % b;
			a = b;
			b = temp;
		}

		else {
			break;
		}
	}

	printf("%d\n", b); //최대공약수
	printf("%d", x * y / b); //최소공배수

	return 0;
}