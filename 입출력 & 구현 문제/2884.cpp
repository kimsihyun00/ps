#include <iostream>

using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	if (m - 45 < 0)
	{
		m += 15;
		h--;

		if (h < 0)
			h += 24;
	}
	else
		m -= 45;

	cout << h << " " << m;

	return 0;
}