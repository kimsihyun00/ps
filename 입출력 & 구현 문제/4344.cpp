#include <iostream>

using namespace std;

double score[1001] = { 0 };

int main()
{
	int c;
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		int n;
		cin >> n;

		double sum = 0;
		for (int j = 1; j <= n; j++)
		{
			cin >> score[j];
			sum += score[j];
		}

		double avg = (double)(sum / n);
		int num = 0;
		for (int j = 1; j <= n; j++)
			if (avg < score[j])
				num++;

		cout << fixed;
		cout.precision(3);
		cout << (double)num / n * 100 << "%\n";
	}

	return 0;
}