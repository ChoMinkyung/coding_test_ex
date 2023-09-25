#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    string compare = "";

	for (int i = 0; i <= t.length() - p.length(); i++)
	{
		for (int j = 0; j < p.length(); j++)
		{
			compare.push_back(t[i + j]);
		}

		if (stod (compare) <= stod (p))answer++;
		compare.clear();
	}
    
    return answer;
}