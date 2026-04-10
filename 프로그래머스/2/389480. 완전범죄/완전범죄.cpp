#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void dfs(const vector<vector<int>>& info, int n, int m, int idx, int a_sum, int b_sum, int& answer);
bool visited[41][121][121] = { false };

int solution(vector<vector<int>> info, int n, int m) {
	
    int answer = -1;
    
    dfs(info, n, m, 0, 0, 0, answer);

	return answer;
}
void dfs(const vector<vector<int>>& info, int n, int m, int idx, int a_sum, int b_sum, int& answer)
{
	if (a_sum >= n || b_sum >= m) return;
	if (answer >= 0 && a_sum >= answer) return;
    if (visited[idx][a_sum][b_sum]) return;

	if (idx >= info.size())
	{
		if (a_sum < n)
		{
			if (answer < 0) answer = a_sum;
			else answer = min(answer, a_sum);
			//cout << "결과:" << a_sum << "," << b_sum << endl;
		}

		return;
	}
    
	visited[idx][a_sum][b_sum] = true;

	dfs(info, n, m, idx + 1, a_sum + info[idx][0], b_sum, answer);
	dfs(info, n, m, idx + 1, a_sum, b_sum + info[idx][1], answer);
}