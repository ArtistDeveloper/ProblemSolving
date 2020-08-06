#include <iostream>
#include <cstdio>
#include <vector>

int main()
{
	int n, temp;
	std::cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << v[i] << std::endl;
	}
	
	return 0;
}
