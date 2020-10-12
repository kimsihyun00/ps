#include <iostream>
#include <string>

using namespace std;

int alphabet[26] = { 0 };

int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
		int index = str[i] - 'A';
		alphabet[index]++;
	}

	int numOfMax = 1;
	int max_index = 0;
	for (int i = 1; i < 26; i++)
	{
		if (alphabet[max_index] < alphabet[i])
		{
			max_index = i;
			numOfMax = 1;
		}
		else if (alphabet[max_index] == alphabet[i])
			numOfMax++;
	}

	if (numOfMax > 1)
		cout << "?";
	else
		cout << (char)(max_index + 'A');

	return 0;
}