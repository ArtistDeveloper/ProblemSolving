#include <iostream>
#include <vector>
#include <string>
#define TRUE 1

using namespace std;

int main()
{
	int size;
	int correct = 0;
	string str;
	vector<char> front;
	vector<char> back;

	while (TRUE) {
		getline(cin, str);
		size = str.length();

		if (str[0] == '0') {
			break;
		}

		else {
			// 중간에서 앞의 부분 벡터에 넣기
			for (int i = 0; i < size / 2; i++) {
				front.push_back(str[i]);
			}

			// 중간에서 뒤의 부분 벡터에 넣기
			
			if (size % 2 == 0) { //size가 짝수일 때
				for (int i = size - 1; i > size / 2 - 1; i--) {
					back.push_back((int)str[i]);
				}
			}

			else { //size가 홀 수 일 떄
				for (int i = size - 1; i > size / 2; i--) {
					back.push_back((int)str[i]);
				}
			}

			// front, back 두 개 벡터 비교하기
			for (int i = 0; i < size / 2; i++) {
				if (front[i] == back[i]) {
					correct++;
				}
			}

			if (correct == size / 2) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
			correct = 0;
			front.clear();
			back.clear();
		}
	}

	system("pause");
	return 0;
}