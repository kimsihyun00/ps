#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];
const long long INF = 1000002;

int main()
{
	long long n, i;
	cin >> n;

	for (int i = 0; i < 1000001; i++)
		arr[i] = INF;
	arr[n] = 0;

	i = n;
	while (i > 1)
	{
		if (arr[i] == INF)
			continue;
		if (i % 3 == 0)
			arr[i / 3] = min(arr[i / 3], arr[i] + 1);
		if (i % 2 == 0)
			arr[i / 2] = min(arr[i / 2], arr[i] + 1);
		arr[i - 1] = min(arr[i - 1], arr[i] + 1);
		i--;
	}
	
	cout << arr[1];

	return 0;
}