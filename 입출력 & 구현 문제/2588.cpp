#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	int digit[3];

	digit[0] = n2 / 100, digit[1] = (n2 % 100) / 10, digit[2] = n2 % 10;

	cout << n1 * digit[2] << "\n";
	cout << n1 * digit[1] << "\n";
	cout << n1 * digit[0] << "\n";
	cout << n1 * digit[2] + n1 * digit[1] * 10 + n1 * digit[0] * 100;

	return 0;
}