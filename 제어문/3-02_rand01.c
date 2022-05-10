// 제어문 (2)
// 난수 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int random, i = 0;

	while (i < 5)
	{
		random = rand() % 9;
		random = rand() % 9 + 1;
		random = rand() % 99 + 1;

		printf("%3d\n", random);
		i++
	}

	return 0;
}