#include <iostream>

using namespace std;

int main()
{
	int n, d1, d2;
	cin >> n;

	d1 = n / 10, d2 = n % 10;

	int length = 0;
	while (true)
	{
		int newNum = d2 * 10 + (d1 + d2) % 10;
		d1 = newNum / 10;
		d2 = newNum % 10;

		length++;

		if (newNum == n)
			break;
	}

	cout << length;

	return 0;
}