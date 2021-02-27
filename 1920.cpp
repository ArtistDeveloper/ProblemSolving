#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int n_array[100001];
int m_array[100001];

int binary_search(int start, int end, int target)
{
	int mid = 0;
	int result = 0;

	while (start <= end) {
		mid = (start + end) / 2; //연산자 우선순위 신경안써서 mid값이 이상하게 나왔음. 아니.. 이런
		if (n_array[mid] == target) return 1;
		else if (n_array[mid] > target) end = mid - 1;
		else if (n_array[mid] < target) start = mid + 1;
	}

	return result;
}

int main()
{
	int n, m, temp = 0;
	int result = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &n_array[i]);
	}
	//이분 탐색을 위한 배열정렬
	sort(n_array, n_array + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &m_array[i]);
	}

	//수 찾기
	for (int i = 0; i < m; i++) {
		result = binary_search(0, n, m_array[i]);
		printf("%d\n", result);
	}


	return 0;
}
