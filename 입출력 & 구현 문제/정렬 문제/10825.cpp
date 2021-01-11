#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct SCORES
{
	string name;
	int kor;
	int eng;
	int math;
};

bool compare(SCORES mem1, SCORES mem2)
{
	if (mem1.kor == mem2.kor)

		if (mem1.eng == mem2.eng)

			if (mem1.math == mem2.math)
				return mem1.name < mem2.name;
			else
				return mem1.math > mem2.math;
		else
			return mem1.eng < mem2.eng;
	else
		return mem1.kor > mem2.kor;

}

int main()
{
	int n;
	cin >> n;

	vector<SCORES> scores(n);

	for (int i = 0; i < n; i++)
		cin >> scores[i].name >> scores[i].kor >> scores[i].eng >> scores[i].math;

	sort(scores.begin(), scores.end(), compare);

	for (int i = 0; i < n; i++)
		cout << scores[i].name << "\n";

	return 0;
}