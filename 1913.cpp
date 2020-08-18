#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int array[999+1][999+1];
int count = 1;
int row = 0, col = 0;
int flag = 1;
int pos;

void draw(int n)
{
	for (int k = n; k > n; k--) {
		if (flag == 1) {
			for (int i = k; i > 0; i--) {
				array[row][col] = count;
			}
		}

		else if (flag == 0) {
			for (int j = k; j > 0; j--) {
				array[row][col] = count;
			}
		}
	}
}

void arrPrint(int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d", array[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	
	draw(n);
	arrPrint(n);
	return 0;
}
