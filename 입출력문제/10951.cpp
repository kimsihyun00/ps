#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		int a = -1, b = -1;
		cin >> a >> b;

		if (a == -1)
			break;
		else
			cout << a + b << "\n";
	}

	return 0;
}