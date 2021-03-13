#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n, age;
	string name;
	vector<pair<int, string>> member;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		member.push_back({age, name});
	}

	stable_sort(member.begin(), member.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << member[i].first << ' ' << member[i].second << '\n';
	}

	return 0;
}
