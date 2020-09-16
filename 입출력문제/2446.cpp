#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (i <= n && j >= i && j <= 2 * n - i)
				cout << "*";
			else if (i > n && j <= i && j >= 2 * n - i)
				cout << "*";
			else if ((i <= n && j < i) || (i > n && j < 2 * n - i))
				cout << " ";
			else
				break;
		}
		cout << "\n";
	}

	return 0;
}