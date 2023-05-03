#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
 int answer = 0, count = 0;
        int array[100];
        scanf("%d", &n);

        printf("%d의 약수는 ", n);


        for (int i = 0; i < n; i++)
        {
            if (n % (i+1) == 0)
            {
                array[count] = n / (i+1);
                //printf("%d ", n / (i + 1));
                count++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            printf("% d, ", array[i]);
            answer += array[i];
        }

        printf("입니다. 이를 모두 더하면 %d입니다.", answer);
        return answer;
    return answer;
}