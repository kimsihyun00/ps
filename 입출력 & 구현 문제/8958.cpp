#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int totalScore, plusScore;
	string input;

	for (int i = 0; i < n; i++)
	{
		totalScore = 0;
		plusScore = 0;
		
		cin >> input;
		int j = 0;
		while (input[j] != '\0')
		{
			if (input[j] == 'O')
			{
				plusScore++;
				totalScore += plusScore;
			}
			else
				plusScore = 0;
			j++;
		}

		cout << totalScore << "\n";
	}

	return 0;
}