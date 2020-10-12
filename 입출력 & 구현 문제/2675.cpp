#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int r;
		cin >> r;
		char s[20];
		cin >> s;

		int j = 0;
		while (true)
		{
			if (s[j] == '\0')
				break;
			for (int count = 0; count < r; count++)
				cout << s[j];
			j++;
		}
		cout << "\n";
	}

	return 0;
}