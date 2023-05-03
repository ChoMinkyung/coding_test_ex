#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int x4=0, x3=0, x2=0, x1=0;
    if((x/1000)>0) x4 = x/1000;
    if((x/100)>0) x3 = (x-x4*1000)/100;
    if((x/10)>0) x2 = (x-x4*1000-x3*100)/10;
    x1=x%10;
    
    if (x%(x4+x3+x2+x1)==0) answer = true;
    else answer = false;
    
    return answer;
}