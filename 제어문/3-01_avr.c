// 제어문 (1)
// 평균값(1)

// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score = 0;
	int sum = 0;
	int avr = 0;
	int i = 0;

	while (score >= 0)
	{
		scanf_s("%d", &score);
		sum = sum + score;
		i++;
	}

	sum = sum - score;
	i = i - 1;
	avr = sum / i;

	printf("%d", avr);

	return 0;
}