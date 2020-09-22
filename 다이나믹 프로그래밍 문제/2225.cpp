#include <iostream>

using namespace std;

long dp[201][201] = { 0 };
const long MOD = 1000000000;

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i <= n; i++)
		dp[i][1] = 1;

	for (int j = 2; j <= k; j++)
		for (int i = 0; i <= n; i++)
		{
			for (int k = 0; k <= i; k++)
				dp[i][j] += dp[k][j - 1];
			dp[i][j] %= MOD;
		}

	cout << dp[n][k] % MOD;

	return 0;
}