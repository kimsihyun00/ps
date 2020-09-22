#include <iostream>

using namespace std;

long long p[101] = { 0,1,1,1,2,2, };

int main()
{
	int t;
	cin >> t;

	for (int j = 6; j <= 100; j++)
		p[j] = p[j - 1] + p[j - 5];


	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		cout << p[n] << "\n";
	}

	return 0;
}