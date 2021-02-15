#include <iostream>

using namespace std;

int main()
{
	int loop;
	//h: 호텔의 높이 w: 호텔의 넓이, n: 몇 번째 손님인지 나타냄.
	int h, w, n;

	//x는 호텔 가로 너비의 호수를 뜻함. y는 층의 위치를 뜻함. => y=100, x=1 => x+y = 101호
	int x_location = 1;
	int y_location = 100;
	int result = 0;

	cin >> loop;

	for (int i = 0; i < loop; i++) {
		cin >> h >> w >> n;
		for (int j = 0; j < n-1; j++) {
			//건물의 층 호수(y_location)가 건물의 총 높이보다 높아지면 100으로 초기화 
			if ((h * 100) == y_location) {
				y_location = 100;

				if (w > x_location) {
					x_location += 1;
				}
			}
			else y_location += 100;
		}
		result = y_location + x_location;
		printf("%d\n", result);

		result = 0;
		x_location = 1;
		y_location = 100;
	}

	return 0;
}
