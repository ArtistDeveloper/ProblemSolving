#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, count;
	int result = 64;
	string board[50];
	
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	
	for (int y = 0; y < n - 7; y++) {
		for (int x = 0; x < m - 7; x++) {
			count = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					count += (i % 2 == j % 2 ? 'W' : 'B') == board[i + y][j + x];
				}
			}
			result = min(result, count);
			result = min(result, 64 - count);
		}
	}

	printf("%d", result);

	return 0;
}