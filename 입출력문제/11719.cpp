#include <iostream>
#include <string>

using namespace std;

int main()
{
	string temp;

	while (getline(cin, temp))
	{
		cout << temp << "\n";
	}

	return 0;
}