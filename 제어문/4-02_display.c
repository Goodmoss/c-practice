// �Լ�(2)
// ���ڿ� ���ڸ� �Է¹ޱ�
// ���ڸ� ���ڸ�ŭ ���

#include <stdio.h>

void display();

int main()
{
	char ch;
	int cnt;

	scanf_s("%c", &ch);
	scanf_s("%d", &cnt);

	display(cnt, ch);

	return 0;
}

void display(int a, char b)
{
	int i;

	for (i = 0; i < a; i++)
		printf("%c  ", b);
}