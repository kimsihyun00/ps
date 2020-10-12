#include <iostream>

using namespace std;

int arr[10001] = { 0 };

int main()
{

	int digit_num[5] = { 0 };

	for (int i = 1; i <= 10000; i++)
	{
		int temp = i;
		int digit = 10000;
		int n = i;
		for (int j = 0; j < 5; j++)
		{
			digit_num[j] = temp / digit;
			temp %= digit;
			digit /= 10;
			n += digit_num[j];
		}
		arr[n]++;
	}

	for (int i = 1; i <= 10000; i++)
		if (arr[i] == 0)
			cout << i << "\n";

	return 0;
}