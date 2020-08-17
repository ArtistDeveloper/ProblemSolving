#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int array[999+1][999+1];
int count = 0;

void draw(int n)
{
	int start = n / 2;

	for (int row = 0; )


	array[start + ][start + ] = count;
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
	int n, pos;
	scanf("%d %d", &n);
	
	draw(n);
	arrPrint(n);
	return 0;
}