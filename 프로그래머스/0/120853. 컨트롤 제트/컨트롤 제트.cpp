#include <string>
#include <vector>

using namespace std;

int solution(string s) {

	int answer = 0;
	int number = 0;
	bool isNegative = false;
	int count = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			if (i + 1 < s.size() && s[i + 1] == 'Z')
			{
				i++;
			}
			else
			{
				if (isNegative) number *= -1;

				answer += number;
			}

			number = 0;
			isNegative = false;
			continue;
		}

		if (s[i] == '-')
		{
			isNegative = true;
			continue;
		}

		number = number * 10 + s[i] - '0';
	}

	if (isNegative) number *= -1;
	answer += number;

	return answer;
}