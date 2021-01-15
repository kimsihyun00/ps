#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	int n;
	cin >> n;

	string cmd;
	stack<int> num;

	for (int i; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int temp;
			cin >> temp;
			num.push(temp);
		}
		else if (cmd == "pop")
		{
			if (num.empty())
				cout << "-1\n";
			else
			{
				cout << num.top() << "\n";
				num.pop();
			}
		}
		else if (cmd == "size")
		{
			cout << num.size() << "\n";
		}
		if (cmd == "empty")
		{
			if (num.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (cmd == "top")
		{
			if (num.empty())
				cout << "-1\n";
			else
				cout << num.top() << "\n";
		}
	}
	
	return 0;
}