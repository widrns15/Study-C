#include <stdio.h>

void print_char(char ch, int cnt);		// 함수 선언

int main(void)
{
	printf_char('@', 5);				// 문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int cnt)			// 매개변수는 있으나 반환형은 없다.
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);					// 매개변수 ch에 받은 문자 출력.
	}
}