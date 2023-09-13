#include <string>
#include <vector>

using namespace std;

int dictionary(string s)
{
	if (s == "zero") return 0;
	else if (s == "one") return 1;
	else if (s == "two") return 2;
	else if (s == "three") return 3;
	else if (s == "four") return 4;
	else if (s == "five") return 5;
	else if (s == "six") return 6;
	else if (s == "seven") return 7;
	else if (s == "eight") return 8;
	else if (s == "nine") return 9;
	else return -1;

}

int solution(string s) {
    int answer = 0;
    string compare;
    
    for (int i = 0; i < s.size(); i++)
	{
		if (s[i] < 58)
		{
			answer = answer * 10 + (s[i] - 48);
		}
		else
		{
			compare.push_back(s[i]);
			if (dictionary(compare) >= 0)
			{
				answer = answer * 10 + dictionary(compare);
				compare.clear();
			}
		}
	}
    
    return answer;
}