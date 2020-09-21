#include <iostream>

using namespace std;

int dp[31] = { 0 };

int main()
{
	int n;
	cin >> n;

	dp[0] = 1, dp[2] = 3;

	if (n % 2 == 0)
		for (int i = 4; i <= n; i += 2)
		{
			dp[i] += dp[i - 2] * 3;
			for (int j = 0; j <= i - 4; j += 2)
				dp[i] += dp[j] * 2;
		}

	cout << dp[n];

	return 0;
}