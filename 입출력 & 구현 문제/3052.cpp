#include <iostream>

using namespace std;

int arr[42] = { 0 };

int main()
{
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		arr[num % 42]++;
	}

	int sum = 0;
	for (int i = 0; i < 42; i++)
		if (arr[i] > 0)
			sum++;

	cout << sum;
		
	return 0;
}