#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> xy1, pair<int, int> xy2)
{
	if (xy1.second == xy2.second)
		return xy1.first < xy2.first;
	else
		return xy1.second < xy2.second;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> xy(n);

	for (int i = 0; i < n; i++)
		cin >> xy[i].first >> xy[i].second;

	sort(xy.begin(), xy.end(), compare);

	for (int i = 0; i < n; i++)
		cout << xy[i].first << " " << xy[i].second << "\n";

	return 0;
}