#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char str[5];
    strcpy(str, s);
    str[strlen(str)] = '/';

    for(int i=0; i<5; i++)
    {
        if(str[i]==43 || str[i]==45) i++;
        
        if(str[i]-'0'<0) i++;
        else answer = answer*10 + (str[i]-'0');

    }    
    if(str[0]==45) return -answer;
    else return answer;
}