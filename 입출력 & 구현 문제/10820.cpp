#include <iostream>
#include <string>

using namespace std;

int main()
{
	int upper = 0, lower = 0, num = 0, space = 0;

	for (int i = 0; i < 100; i++)
	{
		upper = 0, lower = 0, num = 0, space = 0;
		string str;
		getline(cin, str);

		if (str.length() == 0)
			break;

		int j = 0;
		while (str[j] != '\0')
		{
			if ('A' <= str[j] && str[j] <= 'Z')
				upper++;
			else if ('a' <= str[j] && str[j] <= 'z')
				lower++;
			else if ('0' <= str[j] && str[j] <= '9')
				num++;
			else
				space++;
			j++;
		}

		cout << lower << " " << upper << " " << num << " " << space << "\n";
	}

	return 0;
}
