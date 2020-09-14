#include <iostream>

using namespace std;

int main()
{
	int n, min = 1000001, max = -1000001;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (min > temp)
			min = temp;
		if (max < temp)
			max = temp;
	}

	cout << min << " " << max;

	return 0;
}