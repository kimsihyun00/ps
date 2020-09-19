#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		for (int j = n; j > 0; j--)
		{
			if (i <= n && j <= i)
				cout << "*";
			else if (i > n && j <= 2 * n - i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}