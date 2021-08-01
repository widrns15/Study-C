/* 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성합니다. 정수 사칙연산만 입력합니다
	연산기호(+, -, *, /)도 하나의 문자입니다. */

#include <stdio.h>

void main()
{
	int a, c;
	char b;


	printf("사칙 연산 입력(정수) : ");
	scanf("%d%c%d", &a, &b, &c);

	switch (b)
	{
	case '+':
		printf("%d+%d=%d", a, c, a + c);
		break;
	case '-':
		printf("%d-%d=%d", a, c, a - c);
		break;
	case '*':
		printf("%d*%d=%d", a, c, a * c);
		break;
	case '/':
		printf("%d/%d=%d", a, c, a / c);
		break;
	default:
		printf("False");
		break;
	}
}