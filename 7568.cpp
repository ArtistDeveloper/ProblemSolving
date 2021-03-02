#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//키는 0열, 몸무게는 1열에 저장. 2열에는 등수 저장.
int arr[51][3];

int main()
{
	int n, x, y;
	int count;

	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	//덩치를 매길 수 없을 때는 카운트 증가x 매길 수 있으면 카운트 1증가. 카운트는 1부터 시작 됨.
	for (int i = 0; i < n; i++) {
		count = 1;
		for (int j = 0; j < n; j++) {
			if ((arr[i][0] < arr[j][0]) && (arr[i][1] < arr[j][1])) {
				count++;
			}
		}
		arr[i][2] = count;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i][2]);
	}
	

	return 0;
}
