#include <iostream>
#include <string>

using namespace std;

int alphabet[26] = { 0 };

int main()
{
	string str;

	cin >> str;


	int i = 0;

	while (str[i] != '\0')
	{
		alphabet[(str[i] - 'a')]++;
		i++;
	}

	for (int i = 0; i < 26; i++)
		cout << alphabet[i] << " ";

	return 0;
}
