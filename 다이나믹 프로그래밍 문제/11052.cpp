#include <iostream>
#include <algorithm>

using namespace std;

int p[1001] = { 0 };
int dp[1001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> p[i];

	dp[0] = 0, dp[1] = p[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i] = p[i];
		for (int j = 1; j < i; j++)
			dp[i] = max(p[i - j] + dp[j], dp[i]);
	}

	cout << dp[n];

	return 0;
}