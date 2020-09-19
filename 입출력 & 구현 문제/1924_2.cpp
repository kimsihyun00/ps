#include <iostream>
#include <string>
using namespace std;

int numOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
string Weekdays[7] = { "SUN", "MON","TUE", "WED", "THU", "FRI", "SAT" };

int main()
{
	int month, date;
	cin >> month >> date;

	int sumOfDays = 0;
	for (int i = 1; i < month; i++)
	{
		sumOfDays += numOfDays[i - 1];
	}
	sumOfDays += date;

	cout << Weekdays[sumOfDays % 7];

	return 0;
}