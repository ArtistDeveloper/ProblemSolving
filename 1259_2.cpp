#include <iostream>
#include <string>
#define TRUE 1
#define FALSE 0

using namespace std;

int main()
{
	string str;
	
	while (TRUE) {
		int correct = TRUE;
		getline(cin, str);

		if (str[0] == '0') break;

		int size = str.size();

		for (int i = 0; i < size / 2; i++) {
			if (str[i] != str[size - i - 1]) {
				correct = FALSE;
				break;
			}
		}

		if (correct == TRUE) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

	system("pause");
	return 0;
}