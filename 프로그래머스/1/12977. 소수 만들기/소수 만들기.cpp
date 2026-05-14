#include <vector>
#include <iostream>
using namespace std;

bool Check(int a, int b, int c);

int solution(vector<int> nums)
{
	int answer = 0;

	int a = 0;
	int b = 1;
	int c = 2;

	for (int a = 0; a < nums.size() - 2; a++)
	{
		for (int b = a + 1; b < nums.size() - 1; b++)
		{
			for (int c = b + 1; c < nums.size(); c++)
			{
				if (Check(nums[a], nums[b], nums[c]))
				{
					answer++;
				}
			}
		}
	}

	return answer;
}

bool Check(int a, int b, int c)
{
	int n = a + b + c;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}