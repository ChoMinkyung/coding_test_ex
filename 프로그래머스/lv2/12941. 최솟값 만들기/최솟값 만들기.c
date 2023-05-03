#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    for(int i=1; i<A_len; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(A[j-1]>A[j])
            {
                int temp = A[j-1];
                A[j-1]=A[j];
                A[j]=temp;
            }
            
            if(B[j-1]<B[j])
            {
                int temp = B[j-1];
                B[j-1]=B[j];
                B[j]=temp;
            }
        }
    }
    
    for(int i=0; i<A_len; i++)
    {
        answer+=A[i]*B[i];
    }
    return answer;
}