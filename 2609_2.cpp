#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int a, b, temp;
	int x, y;
	scanf("%d %d", &a, &b);
	
	x = a;
	y = b;

	while(b) {
		temp = a % b; //temp 변수에는 나머지가 들어감.
		a = b;
		b = temp; //b에 나머지가 0이 들어가면 최대공약수가 구해졌다는 의미이므로 while탈출
	}

	printf("%d\n", a); //최대공약수
	printf("%d", x * y / a); //최소공배수

	return 0;
}