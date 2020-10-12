#include <iostream>

using namespace std;

int startPoint[26] = { 0 };

int main()
{
	char input[100];
	cin >> input;

	for (int i = 0; i < 26; i++)
		startPoint[i] = -1;

	for (int i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;

		int index = (int)input[i] - 'a';
		if (startPoint[index] == -1)
			startPoint[index] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << startPoint[i] << " ";
}