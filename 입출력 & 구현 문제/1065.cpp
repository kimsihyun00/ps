#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int num = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i >= 1 && i <= 99)
			num++;
		else if (i >= 100 && i <= 999)
		{
			int digit_num[3] = { 0 };
			int digit = 100;
			int temp = i;
			for (int i = 0; i < 3; i++)
			{
				digit_num[i] = temp / digit;
				temp %= digit;
				digit /= 10;
			}

			if (digit_num[2] - digit_num[1] == digit_num[1] - digit_num[0])
				num++;
		}
	}

	cout << num;

	return 0;
}