#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (i == 1)
				cout << "*";
			else if (j == i || j == 2 * n - i)
				cout << "*";
			else if (j > 2 * n - i)
				break;
			else
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}