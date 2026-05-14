#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int n = -1;
	for(int i=0; i<arr.size(); i++)
	{
		if(n == arr[i]) continue;
		n = arr[i];
		answer.push_back(n);
	}

    return answer;
}