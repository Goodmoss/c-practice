// ��� (3)
// ���� ���߱� ���α׷�


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
			printf("�� ���� ���� �Է��ϼ���");
		else if (realNum > userNum)
			printf("�� ū ���� �Է��ϼ���");
		else
			break;
			
	}
	printf("�����մϴ�");
	printf("�õ� Ƚ��: %d", i);

	return 0;
}