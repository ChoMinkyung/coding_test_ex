#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    scanf("%d", &n);
    while(1)
    {
        if(n%answer==1) break;
        else answer++;
    }
    return answer;
}