#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(3*n);
    strcpy(answer, "");
    for(int i=0; i<n; i++)
    {
        if(i%2==0) strcat(answer, "수");
        else strcat(answer,"박");
    }
    
    return answer;
}