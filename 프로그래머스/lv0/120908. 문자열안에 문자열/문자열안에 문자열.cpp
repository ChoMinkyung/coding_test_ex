#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int str2IDX = 0;
	int answer =2;
    for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == str2[str2IDX])
		{
			str2IDX++;
			if (str2IDX == str2.size())
			{
                answer=1;
				return answer;
			}
			continue;
		}
		else if (str1[i] != str2[str2IDX])
		{
			str2IDX = 0;
		}
	}

   return answer;
}