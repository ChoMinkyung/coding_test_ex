#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board);
bool IsSafety(pair<int, int> location, vector<vector<int>> &board);


int solution(vector<vector<int>> board)
{
	int answer = 0;

	int n = board.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (IsSafety({i, j}, board))
				answer++;
		}
	}

	return answer;
}

bool IsSafety(pair<int, int> location, vector<vector<int>> &board)
{
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			int x = location.first + i;
			int y = location.second + j;

			if (x < 0 || x >= board.size() || y < 0 || y > board.size())
			{
				continue;
			}

			if (board[x][y] == 1)
				return false;
		}
	}

	return true;
}