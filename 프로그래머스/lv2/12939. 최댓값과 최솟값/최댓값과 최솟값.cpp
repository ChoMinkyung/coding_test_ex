#include <string>
#include <vector>
#include <limits.h>
#include <math.h>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int max = INT_MIN;
	int min = INT_MAX;
	int digit = 0;
	int compare = 0;
	while (!s.empty())
	{
		if (s[s.size() - 1] >= '0' && s[s.size() - 1] <= '9')
		{
			compare = compare + (int)(s[s.size() - 1] - '0') * pow(10,digit);
			digit++;
		}
		else if (s[s.size() - 1] >= '-') compare *= -1;
		else
		{
			if (max < compare) max = compare;
			if (min > compare) min = compare;

			compare = 0;
			digit = 0;
		}
		s.pop_back();

		if (s.empty())
		{
			if (max < compare) max = compare;
			if (min > compare) min = compare;
		}
	}

	answer = to_string(min);
	answer.push_back(' ');
	answer += to_string(max);
    
    return answer;
}