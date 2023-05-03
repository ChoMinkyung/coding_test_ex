#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

	scanf("%d", &n);
	for (int i = 100000000; i > 0; i /= 10)
	{
		answer += n / i;
		n = n - ((n / i) * i);
	}
	printf("%d", answer);
	return answer;
}