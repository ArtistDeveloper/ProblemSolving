#include <iostream>

using namespace std;

int main()
{
	int n;
	int sugar_sum = 0;
	cin >> n;	

	while (n != 0)
	{
		//n을 5로 나누었을 때 나머지가 0인 경우. (5의 배수)
		if (n % 5 == 0) {
			++sugar_sum;
			n -= 5;
		}

		//5의 배수가 아니고 3의 배수인 경우. ex: 9
		else if (n % 3 == 0) {
			n -= 3;
			++sugar_sum;
		}

		//5, 3의 배수가 아닌 경우는 우선 5를 뺴고 봄. ex: 11
		else if (n > 5) {
			n -= 5;
			++sugar_sum;
		}

		//5,3의 배수도 아니고 5보다 n이 크지도 않을 때. ex: 4,7(7은 5를 빼고 난 뒤 2가 되어 while을 한번 더 돌 떄 조건불충족)
		else {
			cout << -1;
			return 0;
		}
	}

	cout << sugar_sum;
	
	return 0;
}
