#include <iostream>
using namespace std;

int main()
{
	int A, B, V, result = 0;
	cin >> A >> B >> V;

	if (((V - B) % (A - B)) != 0) result = (V - B) / (A - B) + 1;
	else result = (V - B) / (A - B);
	cout << result;

	return 0;
}
