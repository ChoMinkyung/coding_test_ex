#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int exit = 1;
    for(int i=0; i<10; i++)
    {
        exit=1;

        for(int j=0; j<numbers_len; j++)
        {
            if(numbers[j]==i)
            {
                exit=0;
                j=numbers_len; 
            }
        }
        if(exit==1)
        {
            answer=answer+i;
            
        }
    }
    
    return answer;
}