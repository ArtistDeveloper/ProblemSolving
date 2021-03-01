#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int card[500001];

int lower_bound(int start, int end, int target)
{
	int mid = 0;
	int count = 0;
	
	while (start <= end) {
		mid = (start + end) / 2;
		if (card[mid] < target) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return start;
}

int upper_bound(int start, int end, int target)
{
	int mid = 0;
	int count = 0;

	while (start <= end) {
		mid = (start + end) / 2;
		if (card[mid] > target) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	return start;
}

int main()
{
	int n, m, num = 0;
	int result = 0;
	int result2 = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	sort(card, card + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		result = lower_bound(0, n-1, num);
		result2 = upper_bound(0, n-1, num);
		printf("%d ", result2 - result);
	}

	return 0;
}
