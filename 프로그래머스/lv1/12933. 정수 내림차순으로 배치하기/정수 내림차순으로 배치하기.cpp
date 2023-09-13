#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
	vector <int> list;

	while (n > 0)
	{
		list.push_back(n % 10);
		n = n / 10;
	}

	for (int i = 1; i < list.size(); i++)
	{
		int cur = i;

		for (int j = i - 1; j > -1; j--)
		{
			if (list[cur] > list[j])
			{
				int temp = list[cur];
				list[cur] = list[j];
				list[j] = temp;

				cur--;
			}
		}

	}

	for (int i = 0; i < list.size(); i++)
	{
		  answer  = 10 * answer + list[i];
	}
    
    return answer;
}