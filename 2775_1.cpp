#include <iostream>
using namespace std;

int room[15][15];

int main()
{
	int test_case;
	//floor: 층(k), number: 호수(n)
	int floor, number;

	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		cin >> floor >> number;
		for (int j = 0; j < floor+1; j++) {
			for (int k = 1; k < number+1; k++) { 
				//0층일 때 초기화.
				if (j == 0) {
					room[0][k] = k;
				}
				//1층 이상이면. (j가 0보다 크면)
				else {
					//l도 호수를 가리킴. 즉 1부터 시작.
					for (int l = 1; l < k+1; l++) {
						room[j][k] += room[j - 1][l];
					}
				}
			}			
		}
		cout << room[floor][number] <<'\n';
		
		for (int i = 0; i < 15; i++) {
			for (int j = 0; j < 15; j++) {
				room[i][j] = 0;
			}
		}
	}

	return 0;
}
