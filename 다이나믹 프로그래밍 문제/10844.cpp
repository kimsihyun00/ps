#include <iostream>

using namespace std;

int arr[101][10] = { 0 };
const long MOD = 1000000000;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 9; i++)
		arr[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		arr[i][0] = arr[i - 1][1] % MOD;
		arr[i][9] = arr[i - 1][8] % MOD;
		for (int j = 1; j <= 8; j++)
		{
			arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % MOD;
		}
	}

	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum = (sum + arr[n][i]) % MOD;

	cout << sum;

	return 0;
}