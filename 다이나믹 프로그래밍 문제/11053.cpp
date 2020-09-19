#include <iostream>

using namespace std;

int arr[1001] = { 0 };
int length[1001] = { 0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		length[i] = 1;
		for (int j = 1; j < i; j++)
			if (arr[j] < arr[i] && length[j] >= length[i])
				length[i] = length[j] + 1;
	}

	int max = length[1];
	for (int i = 1; i <= n; i++)
		if (max < length[i])
			max = length[i];

	cout << max;

	return 0;
}