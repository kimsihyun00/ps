#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main()
{
	queue<int> queue;
	string cmd;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int temp;
			cin >> temp;
			queue.push(temp);
		}
		if (cmd == "pop")
		{
			if (queue.empty())
				cout << "-1\n";
			else
			{
				cout << queue.front() << "\n";
				queue.pop();
			}
		}
		if (cmd == "size")
		{
			cout << queue.size() << "\n";
		}
		if (cmd == "empty")
		{
			if (queue.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		if (cmd == "front")
		{
			if (queue.empty())
				cout << "-1\n";
			else
				cout << queue.front() << "\n";
		}
		if (cmd == "back")
		{
			if (queue.empty())
				cout << "-1\n";
			else
				cout << queue.back() << "\n";
		}
	}
	
	return 0;
}


