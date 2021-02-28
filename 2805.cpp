#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int tree_len_array[1000001];

int binary_search(int start, int end, int target, int tree_num)
{
	long long mid = 0;

	// target의 길이와(7) 임의로 설정한 절단기의 높이를(cutter_high) 통해 length에 더한 값을 조건으로 사용.
	while (start <= end) {
		long long tree_length = 0; // 절단기의 높이 기준으로 잘려진 나무들의 길이 합.
		mid = (start + end) / 2;
		
		for (int i = 0; i < tree_num; i++) {
			if (mid < tree_len_array[i]) { // mid보다 작은 값인데 나무를 자르면 -값이 나옴.
				tree_length += tree_len_array[i] - mid;
			}
		}

		if (tree_length >= target) start = mid + 1; //잘려진 나무들의 길이합보다 정해진 나무들의 길이가 더 클 떄 : 절단기의 높이가 큼.
		else end = mid - 1;
	}

	return end;
}

int main()
{
	//tree_num : 나무의 수
	//tree_length : 집으러 가져가려고 하는 나무의 길이
	int tree_num, tree_length;
	cin >> tree_num >> tree_length;

	int max = 0;

	for (int i = 0; i < tree_num; i++) {
		scanf("%d", &tree_len_array[i]);
		if (max < tree_len_array[i]) max = tree_len_array[i];
	}

	int result = binary_search(1, max, tree_length, tree_num);
	printf("%d", result);
	

	return 0;
}
