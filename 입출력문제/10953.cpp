#include <iostream>

using namespace std;

int main()
{
	int t, a, b;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		char temp;
		cin >> a >> temp >> b;

		cout << a + b << "\n";
	}

	return 0;
}