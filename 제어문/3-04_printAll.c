// ��� (4)
// ������ �Է¹ް�, �� ������ �Ҽ� ��� ���


#include <stdio.h>

int main()
{
	int printNum=0;
	int i =0;
	int j=0;
	int userNum = 0;
	scanf_s("%d", &userNum);

	for (i = 2; i <= userNum; i++)
	{
		
		for (j = 2; j < userNum; j++)
		{
			if (i%j ==0)
				break;
		}
		if (i==j)
			printf("%d\n", i);
	}

	return 0;
}