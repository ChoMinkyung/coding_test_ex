#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int a, b = 0;

	if (sides[0] > sides[1])
	{
		b = sides[0];
		a = sides[1];
	}
	else
	{
		b = sides[1];
		a = sides[0];
	}

	answer += a;
	answer += a - 1;
    return answer;
}