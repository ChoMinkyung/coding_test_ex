#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    scanf("%lld", &n);
    long long n2 = n;
    if (n>1000000000000) n2 = n/1000000;
    else if (n>1000000) n2 = n/1000;
    else if (n>10000) n2=n/100;
    
    for(long long i=1; i<=n2; i++)
    {
        if(i==n/i && n%i==0) 
        {
            answer=(i+1)*(i+1);
        }
        
    }
    if (answer==0) answer = -1;
    return answer;
}