#include <iostream>

using namespace std;

int arr[1001] = { 0 };
int sum[1001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		sum[i] = arr[i];
		for (int j = 1; j < i; j++)
			if (arr[j] < arr[i] && sum[i] < sum[j] + arr[i])
				sum[i] = sum[j] + arr[i];
	}

	int max = sum[1];
	for (int i = 1; i <= n; i++)
		if (max < sum[i])
			max = sum[i];

	cout << max;

	return 0;
}