#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int m, n;
int result = 250;
string board[50]; // == char board[50][50];
string wb[8] =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string bw[8] =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

void wbcpr(int x, int y) //0 0
{
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (wb[i][j] != board[y+i][x+j]) {
				count++;
			}
		}
	}

	if (count < result) result = count;
}

void bwcpr(int x, int y)
{
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (bw[i][j] != board[y + i][x + j]) {
				count++;
			}
		}
	}

	if (count < result) result = count;
}


int main() 
{
	cin >> m >> n; // board크기 입력

	for (int i = 0; i < m; i++) {
		cin >> board[i]; //scanf("%s", board[i]);
	}

	//board cut
	for (int y = 0; y < m - 7; y++) { // 0 < 3  10-7
		for (int x = 0; x < n - 7; x++) { // 0 < 6   13-7
			wbcpr(x, y);
			bwcpr(x, y);
			//마지막꺼 검사안하는데 왜지?
		}
	} 

	printf("%d", result);

	return 0;
}