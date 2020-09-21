#include <iostream>

using namespace std;

int arr[1001] = { 0 };
int lengthInc[1001] = { 0 };
int lengthDec[1001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		lengthInc[i] = 1;
		for (int j = 1; j < i; j++)
			if (arr[j] < arr[i] && lengthInc[j] >= lengthInc[i])
				lengthInc[i] = lengthInc[j] + 1;
	}

	for (int i = n; i > 0; i--)
	{
		lengthDec[i] = 1;
		for (int j = n; j > i; j--)
			if (arr[j] < arr[i] && lengthDec[j] >= lengthDec[i])
				lengthDec[i] = lengthDec[j] + 1;
	}

	int max = lengthInc[1] + lengthDec[1] - 1;
	for (int i = 1; i <= n; i++)
		if (max < lengthInc[i] + lengthDec[i] - 1)
			max = lengthInc[i] + lengthDec[i] - 1;

	cout << max;

	return 0;
}