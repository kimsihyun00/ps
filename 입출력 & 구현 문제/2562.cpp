#include <iostream>

using namespace std;

int arr[10];

int main()
{
	int index = 0;
	arr[0] = 0;
	for (int i = 1; i <= 9; i++)
	{
		cin >> arr[i];
		if (arr[index] < arr[i])
			index = i;
	}

	cout << arr[index] << "\n";
	cout << index;

	return 0;
}