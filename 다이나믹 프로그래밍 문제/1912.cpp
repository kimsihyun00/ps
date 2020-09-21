#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001] = { 0 };
int sum[100001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sum[1] = arr[1];
	for (int i = 2; i <= n; i++)
	{
		sum[i] = max(arr[i], sum[i - 1] + arr[i]);
	}

	int max = sum[1];
	for (int i = 1; i <= n; i++)
		if (max < sum[i])
			max = sum[i];

	cout << max;

	return 0;
}