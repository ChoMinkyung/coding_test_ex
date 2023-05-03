#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = money;
    for(int i=1; i<count+1; i++)
    {
        answer -= i*price;
    }
    
    if(answer<0) answer=-answer;
    else answer=0;
    
    return answer;
}