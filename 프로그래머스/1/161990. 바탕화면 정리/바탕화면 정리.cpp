#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;

	int start_x = 100; //min
	int start_y = 100; // min
	int end_x = 0; // max
	int end_y = 0; // max

	for (int i = 0; i < wallpaper.size(); i++)
	{
		for (int j = 0; j < wallpaper[i].size(); j++)
		{
			if (wallpaper[i][j] == '#')
			{
				if (start_x > i) start_x = i;
				if (start_y > j) start_y = j;

				if (end_x < i) end_x = i;
				if (end_y < j) end_y = j;
			}
		}
	}

	answer.push_back(start_x);
	answer.push_back(start_y);
	answer.push_back(end_x + 1);
	answer.push_back(end_y + 1);
	return answer;
}