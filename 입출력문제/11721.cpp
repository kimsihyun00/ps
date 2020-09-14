#include <iostream>

using namespace std;

int main()
{
	char temp[100];
	cin >> temp;

	int count = 0;
	while (temp[count]!='\0')
	{
		cout << temp[count++];
		if (count % 10 == 0)
		{
			cout << "\n";
		}
	}

	return 0;
}