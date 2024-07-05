#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    int GeneralAnt = 5;
    int SoldierAnt = 3;
    int WorkerAnt = 1;
    
    answer += hp / GeneralAnt;
    hp = hp % GeneralAnt;
    
    answer += hp / SoldierAnt;
    hp = hp % SoldierAnt;
    
    answer += hp / WorkerAnt;
    hp = hp % WorkerAnt;
    
    return answer;
}