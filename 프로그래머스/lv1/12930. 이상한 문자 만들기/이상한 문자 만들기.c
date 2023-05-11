#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s)+2);
    strcpy(answer, s);
    int i=0, word=0;
    while(answer[i]!='\0')
    {
        if(answer[i]==' ') word=0;
        else
        {
            if(word%2==0 && answer[i] >=97 && answer[i]<=122) answer[i]-=32;
            else if(word%2!=0 && answer[i]<=90 && answer[i]>=65)answer[i]+=32;
            
            word++;
        } 
       
        i++;
    }
    
    return answer;
}