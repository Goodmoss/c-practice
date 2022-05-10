// 함수(2)
// 문자와 숫자를 입력받기
// 문자를 숫자만큼 출력

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