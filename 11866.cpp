#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	int count = 0;
	queue<int> q;
	scanf("%d %d", &n, &k);

	for (int i = 1; i < n+1; i++) {
		q.push(i);
	}

	int qsize = q.size();
	//조건문에서 계속 q.size()를 호출해서 크기를 확인하는 것 보다 변수를 놓고 사용.
	printf("<");
	while (qsize--) {
		for (int i = 0; i < k-1; i++) {
			q.push(q.front());
			q.pop();
		}

		if (qsize > 0) {
			printf("%d, ", q.front());
			q.pop();
		}

		else {
			printf("%d>", q.front());
			q.pop();
		}
	}

	return 0;
}
