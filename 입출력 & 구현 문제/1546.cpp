#include <iostream>

using namespace std;

double arr[1001] = { 0 };

int main()
{
	int n;
	cin >> n;
	
	double m = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (m < arr[i])
			m = arr[i];
	}

	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += arr[i] / m * 100;

	cout << fixed;
	cout.precision(2);
	cout << sum / n;

	return 0;
}