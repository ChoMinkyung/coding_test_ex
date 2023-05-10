#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int count=0;
    int i=0;
    while(answer==true)
    {
        if(s[i]=='\0') break;
        else if(s[i]==40) count++;
        else count--;
        
        if(count<0)
        {
            answer=false;
            break;
        }
        
        i++;
    }
    
    if(count!=0) answer=false;
    
    return answer;
}