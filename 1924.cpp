#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int month, day, totalDay = 0;
	
	scanf("%d %d", &month, &day);

	int dayArray[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 0; i < month; i++) {
		totalDay += dayArray[i];
	}

	totalDay += day;

	switch (totalDay % 7)
	{
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	default:
		break;
	}
	
	return 0;
}