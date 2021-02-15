#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check[8001];

int find_mean(vector<int> vec, int n)
{
	double mean = 0;

	for (int i = 0; i < n; i++) {
		mean += vec[i];
	}

	mean = mean / n;

	//반올림 구현
	//양수일 떄 0.5를 더해서 정수자리가 바뀌면, int형으로 변했을 때 반올림 한 결과가 나온다. ex) 1.5 + 0.5 = 2.0 => int형으로 변환 시 2.
	//ex)2 1.4 + 0.5 = 1.9 => int형으로 변환 시 1. 즉, 반올림 되는 결과를 확인할 수 있다. 음수는 반대로 생각하면 됨.
	if (mean > 0) mean += 0.5;
	else mean -= 0.5;

	return (int)mean;
}

int find_median(vector<int> vec, int n)
{
	int middle = n / 2;
	return vec[middle];
}

//최빈값이 여러 개 있을 때에는 두 번쨰로 작은 값을 출력한다.
int find_mode(int n)
{
	int frequency = 0; //빈도수를 저장하는 변수
	int location = 0;	
	
	for (int i = 0; i < 8001; i++) {
		if (frequency < check[i]) {
			frequency = check[i];
			location = i;
		}
	}

	//어차피 바로 다음 조건에 만족하는 수를 구하고 break를 하기 떄문에 for내부에 조건에 문제가 생기는 것을 걱정할 필요는 없다.
	//그렇지만, 문제가 생길 여지가 있으니
	//location을 가지고 있는 다른 임시변수를 하나 만들어 for (int i = temp + 1; ~~)로 작성하는 것이 좋을 수도 있을 것 같다.
	for (int i = location + 1; i < 8001; i++) {
		if (frequency == check[i]) {
			location = i;
			break;
		}
	}

	return location - 4000;
}

int find_range(vector<int> vec, int n)
{
	int range = 0;
	range = vec[n-1] - vec[0];

	return range;
}


int main()
{
	int n;
	int data;
	vector<int> vec;

	int mean, median, mode, range;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> data;
		vec.push_back(data);
		check[data + 4000]++;

		//여기서 max, min값을 따로 구해놓으면 굳이 sort할 필요 없이 range를 구할 수 있다.
	}

	sort(vec.begin(), vec.end());

	mean = find_mean(vec, n);
	median = find_median(vec, n);
	mode = find_mode(n);
	range = find_range(vec, n);
	
	
	printf("%d\n", mean);
	printf("%d\n", median);
	printf("%d\n", mode);
	printf("%d\n", range);

	return 0;
}
