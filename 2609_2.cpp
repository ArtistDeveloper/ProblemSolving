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
		temp = a % b; //temp �������� �������� ��.
		a = b;
		b = temp; //b�� �������� 0�� ���� �ִ������� �������ٴ� �ǹ��̹Ƿ� whileŻ��
	}

	printf("%d\n", a); //�ִ�����
	printf("%d", x * y / a); //�ּҰ����

	return 0;
}