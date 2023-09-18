#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
	int temp = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp += (i + j);
			if (temp == n)
			{
				answer++;
				temp = 0;
				break;
			}
			else if (temp > n)
			{
				temp = 0;
				break;
			}
		}
	}
    return answer;
}