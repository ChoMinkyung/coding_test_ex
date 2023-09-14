#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
   
    int min = 0;
    if(arr.size()<=1) answer.push_back(-1);
    else
    {
        answer = arr;
        for(int i=0; i<answer.size(); i++)
        {
            if(answer[min] > answer[i]) min=i;
        }
        
        answer.erase(answer.begin() + min);
    }
    return answer;
}