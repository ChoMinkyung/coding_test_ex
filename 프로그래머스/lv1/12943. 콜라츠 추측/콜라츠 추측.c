#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long n=num;
    while(1)
    {
        if(n==1 || answer>500) break;
        
        if(n%2==0) n/=2;
        else n = n*3+1;
        
        answer++;
    }
    if(n!=1) answer=-1;
    return answer;
}