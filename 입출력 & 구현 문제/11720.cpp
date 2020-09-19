#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	char temp;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum += temp - 48;
	}

	cout << sum;

	return 0;
}