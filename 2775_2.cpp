#include <iostream>
using namespace std;

int room[15][15];

int main()
{
	int floor, number, test_case;

	for (int i = 1; i < 15; i++) {
		room[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			room[i][j] = room[i][j-1] + room[i-1][j];
		}
	}
	
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		cin >> floor >> number;
		printf("%d\n", room[floor][number]);
	}
	
	return 0;
}
