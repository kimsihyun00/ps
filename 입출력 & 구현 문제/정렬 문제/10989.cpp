#include <iostream>

using namespace std;

int count[10001] = { 0 };

int main()
{
	int n;
	scanf("%d", &n);;

	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (count[i] > 0)
			for (int j = 0; j < count[i]; j++)
				printf("%d\n", i);
	}

	return 0;
}