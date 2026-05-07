#include <string>
#include <vector>

using namespace std;

int solution(int n);
int count(int n);

int solution(int n)
{
	int answer = 0;

	for (int i = 2; i <= n; i++)
	{
		int result = count(i);
		if (result > 2)
		{
			answer++;
		}

	}
	return answer;
}

int count(int n)
{
	int answer = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			answer++;
		}
	}

	return answer + 1;
}