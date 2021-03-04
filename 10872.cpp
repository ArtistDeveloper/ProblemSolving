#include <iostream>

int factorial(int n)
{
	if (n == 0) {
		return 1;
	}

	else return n * factorial(n - 1);
}

int main()
{
	int n, result;
	std::cin >> n;
	result = factorial(n);
	std::cout << result;

	return 0;
}
