#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> mem1, pair<int, string> mem2)
{
	return mem1.first < mem2.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, string>> members(n);

	for (int i = 0; i < n; i++)
		cin >> members[i].first >> members[i].second;

	// 순서 손상없이
	stable_sort(members.begin(), members.end(), compare);

	for (int i = 0; i < n; i++)
		cout << members[i].first << " " << members[i].second << "\n";

	return 0;
}