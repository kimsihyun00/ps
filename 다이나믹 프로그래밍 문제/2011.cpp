#include <iostream>
#include <string>
using namespace std;

string str;
int dp[5001] = { 0 };
const int MOD = 1000000;

int main()
{
	cin >> str;
	int n = str.size();

	if (str[0] == '0')
	{
		cout << "0";
		return 0;
	}

	dp[0] = 1, dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int index = i - 1;
		int temp = str[index] - '0';
		if (temp >= 1 && temp <= 9)
			dp[i] += dp[i - 1] % MOD;

		temp = (str[index - 1] - '0') * 10 + (str[index] - '0');
		if (temp >= 10 && temp <= 26)
			dp[i] += dp[i - 2] % MOD;
	}

	cout << dp[n] % MOD;

	return 0;
}