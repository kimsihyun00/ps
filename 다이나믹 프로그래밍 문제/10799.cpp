#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{

	string str;
	stack<char> st;

	int num = 0;

	cin >> str;

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '(')
		{
			st.push('(');
		}
		else if (str[i] == ')' && str[i - 1] == '(')
		{
			st.pop();
			num += st.size();
		}
		else
		{
			st.pop();
			num += 1;
		}
		i++;
	}

	cout << num;

	return 0;
}


