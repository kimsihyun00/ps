#include <iostream>
#include <string>
#include <deque>

using namespace std;
int main()
{
	deque<int> deque;
	string cmd;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			int temp;
			cin >> temp;
			deque.push_front(temp);
		}
		if (cmd == "push_back")
		{
			int temp;
			cin >> temp;
			deque.push_back(temp);
		}
		if (cmd == "pop_front")
		{
			if (deque.empty())
				cout << "-1\n";
			else
			{
				cout << deque.front() << "\n";
				deque.pop_front();
			}
		}
		if (cmd == "pop_back")
		{
			if (deque.empty())
				cout << "-1\n";
			else
			{
				cout << deque.back() << "\n";
				deque.pop_back();
			}
		}
		if (cmd == "size")
		{
			cout << deque.size() << "\n";
		}
		if (cmd == "empty")
		{
			if (deque.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		if (cmd == "front")
		{
			if (deque.empty())
				cout << "-1\n";
			else
				cout << deque.front() << "\n";
		}
		if (cmd == "back")
		{
			if (deque.empty())
				cout << "-1\n";
			else
				cout << deque.back() << "\n";
		}
	}
	
	return 0;
}


