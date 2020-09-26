#include <iostream>

using namespace std;

int digit[10] = { 0 };

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int mul = a * b * c;

	while (mul != 0)
	{
		digit[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i <= 9; i++)
		cout << digit[i] << "\n";

	return 0;
}