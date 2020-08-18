#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int array[999+1][999+1];
int row = 0, col = 0;
int downRowLimit, rightColLimit, upRow = 0, leftCol = 0;


void numPut(int n)
{
	downRowLimit = n-1;
	rightColLimit = n-1;

	for (int k = n * n; k > 0; k--) {
		if (row < downRowLimit && col == leftCol) {
			array[row++][col] = k;
		}

		else if (col < rightColLimit && row == downRowLimit) {
			array[row][col++] = k;
		}

		else if (upRow < row && col == rightColLimit) {
			array[row--][col] = k;
		}

		else if (row == upRow && leftCol < col) {
			array[row][col--] = k;
			if (col == leftCol + 1) {
				downRowLimit -= 1;
				rightColLimit -= 1;
				leftCol += 1;
				upRow += 1;
			}
		}

		else if (upRow == leftCol) {
			array[row][col] = k;
		}
	}
}

void arrPrint(int size, int posNum)
{
	int row, col;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] == posNum) {
				row = i;
				col = j;
			}
			printf("%d", array[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("%d %d", row+1, col+1);
}

int main()
{
	int n, posNum;
	scanf("%d %d", &n, &posNum);
	
	numPut(n);
	arrPrint(n, posNum);
	return 0;
}
