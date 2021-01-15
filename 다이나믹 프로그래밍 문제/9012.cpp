#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	int t;
	cin >> t;

	string str;

	for (int i; i < t; i++)
	{
		stack<int> st;

		cin >> str;

		bool not_vps = false;
		int j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == '(')
				st.push(1);
			else if (str[j] == ')')
			{
				if (st.empty())
				{
					not_vps = true;
					break;
				}
				else
					st.pop();
			}
			j++;
		}

		if (st.empty() && !not_vps)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}