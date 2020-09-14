#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month, date;
	cin >> month >> date;

	int numOfDates = 0;
	for (int i = 1; i < month; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			numOfDates += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			numOfDates += 30;
			break;
		case 2:
			numOfDates += 28;
			break;
		defalut:
			break;
		}
	}

	numOfDates += date;
	string msg = "";

	switch (numOfDates % 7)
	{
	case 0:
		msg = "SUN";
		break;
	case 1:
		msg = "MON";
		break;
	case 2:
		msg = "TUE";
		break;
	case 3:
		msg = "WED";
		break;
	case 4:
		msg = "THU";
		break;
	case 5:
		msg = "FRI";
		break;
	case 6:
		msg = "SAT";
		break;
	}

	cout << msg;

	return 0;
}