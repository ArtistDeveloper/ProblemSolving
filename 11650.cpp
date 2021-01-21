#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	//int x, y;
	cin >> n;

	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		//cin >> x >> y;
		//v[i].first = x;
		//v[i].second = y;
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n'; //endl쓰면 시간초과남.
	}

	return 0;
}
