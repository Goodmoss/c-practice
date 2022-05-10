// 제어문 (3)
// 숫자 맞추기 프로그램


#include <stdio.h>

int main()
{
	int userNum = 0;
	int realNum = 0;
	int i = 0;

	realNum = rand() % 9 + 1;

	while (userNum != realNum)
	{
		scanf_s("%d", &userNum);
		i++;

		if (realNum < userNum)
			printf("더 작은 수를 입력하세요");
		else if (realNum > userNum)
			printf("더 큰 수를 입력하세요");
		else
			break;
			
	}
	printf("축하합니다");
	printf("시도 횟수: %d", i);

	return 0;
}