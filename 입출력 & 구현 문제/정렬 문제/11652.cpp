#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	long long nums[1000001];

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	sort(nums, nums + n);

	int count = 1;
	long long max_nums = nums[0];
	int max_count = 1;
	for (int i = 1; i < n; i++)
	{
		if (nums[i - 1] == nums[i])
			count++;
		else
			count = 1;

		if (count > max_count)
		{
			max_count = count;
			max_nums = nums[i];
		}
	}

	cout << max_nums;

	return 0;
}