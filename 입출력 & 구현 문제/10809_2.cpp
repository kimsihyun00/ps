#include <iostream>
#include <string>

using namespace std;

int alphabet[26];

int main()
{
	string str;

	cin >> str;

	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	int i = 0;

	while (str[i] != '\0')
	{
		if (alphabet[(str[i] - 'a')] == -1)
			alphabet[(str[i] - 'a')] = i;
		i++;
	}

	for (int i = 0; i < 26; i++)
		cout << alphabet[i] << " ";

	return 0;
}
