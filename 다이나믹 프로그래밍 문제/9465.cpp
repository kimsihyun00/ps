#include <iostream>
#include <algorithm>

using namespace std;

long long arr[3][100001] = { 0 };
long long sum[3][100001] = { 0 };

int main()
{
	long t, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (long j = 1; j <= 2; j++)
			for (long k = 1; k <= n; k++)
				cin >> arr[j][k];

		sum[1][1] = arr[1][1], sum[2][1] = arr[2][1];
		for (long j = 2; j <= n; j++)
		{
			sum[1][j] = max(sum[2][j - 2], sum[2][j - 1]) + arr[1][j];
			sum[2][j] = max(sum[1][j - 2], sum[1][j - 1]) + arr[2][j];
		}

		cout << max(sum[1][n], sum[2][n]) << "\n";
	}

	return 0;
}