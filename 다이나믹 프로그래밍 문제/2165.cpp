#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001] = { 0 };
int sum[10001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sum[1] = arr[1], sum[2] = arr[1] + arr[2];
	sum[3] = max(arr[1] + arr[2], max(arr[2] + arr[3], arr[1] + arr[3]));
	for (int i = 4; i <= n; i++)
	{
		sum[i] = max(sum[i - 1], max(sum[i - 2] + arr[i], sum[i - 3] + arr[i - 1] + arr[i]));
	}

	int max = sum[0];
	for (int i = 1; i <= n; i++)
		if (max < sum[i])
			max = sum[i];

	cout << max;

	return 0;
}