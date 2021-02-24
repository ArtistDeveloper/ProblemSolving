#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

long long num_of_lan[10001];

long long binary_search(long long start, long long end, int n, int k)
{
    while (start <= end) {
        int count = 0;
        long long middle = (start + end) / 2;

        for (int i = 0; i < k; i++) {
            count += num_of_lan[i] / middle;
        }

        if (count >= n) start = middle + 1;
        else end = middle - 1;
    }

    return end;
}

int main()
{
    int k, n;
    long long max = 0;
    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        scanf("%d", &num_of_lan[i]);
        if (max < num_of_lan[i]) max = num_of_lan[i];
    }

    long long result = binary_search(1, max, n, k);
    printf("%d", result);

    return 0;
}
