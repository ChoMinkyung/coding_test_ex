#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    for (string word : dic)
    {
	    bool valid = true;
	    if (word.length() != spell.size())
	    {
		    continue;
	    }

	    for (string alphabet : spell)
	    {
		    if (word.find(alphabet) == string::npos)
		    {
			    valid = false;
			    break;
		    }
	    }

	    if (valid) answer++;
	
    }
    return answer > 0 ? 1 : 2;
}