#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int temp = 0;
	int cal = 1;
	bool plus = true;
	while (true)
	{
		temp = food[cal] / 2;
		while (temp > 0)
		{
			answer += to_string(cal);
			temp--;
		}
        
        
		if (cal == food.size()-1 && plus)
		{
			answer += to_string(0);
			plus = false;
		}
		else
		{
			if (plus)cal++;
			else cal--;
		}


		if (cal == 0) break;
	}
    return answer;
}