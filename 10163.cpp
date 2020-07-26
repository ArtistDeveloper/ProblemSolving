#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int board[101][101] = { 0 };
	int confetti;
	int row, column, width, height;
	int cnt[101] = { 0 };

	scanf("%d", &confetti);

	for (int i = 1; i < confetti + 1; i++) {
		scanf("%d %d %d %d", &row, &column, &height, &width); // 너비랑 높이 바꿔서 입력되게 만들었음.
		for (int j = 0; j < height; j++) {
			for (int k = 0; k < width; k++) {
				board[row][column+k] = i;
			}
			row++;
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			cnt[board[i][j]]++; 
            // cnt[0][0]이 1일때 +1
            // cnt[0][1]이 1일때 +1 이런식으로 1번  색종이의 면적이 구해진다.
		}
	}

	for (int i = 1; i < confetti + 1; i++) {
		printf("%d\n", cnt[i]);
	}
	
	return 0;
}
