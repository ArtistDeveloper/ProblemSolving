#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <algorithm>

int Min(int A, int B) { if (A < B) return A; return B; }

int n;
int dp[1000001];

int main()
{
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) dp[i] = 2e9;

	dp[0] = 0;
	dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		dp[i] = Min(dp[i], dp[i - 1] + 1);
		if (i % 2 == 0) dp[i] = Min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = Min(dp[i], dp[i / 3] + 1);
	}

	printf("%d", dp[n]);

	return 0;
}
