// 매게변수가 없는 함수

#include <stdio.h>

int get_pos(void);				// 함수 선언

int main(void)
{
	int res;

	res = get_pos();
	printf("반환값 : %d \n", res);
	return 0;
}

int get_pos(void)
{
	int pos;

	printf("양수 입력 : ");
	scanf("%d", &pos);

	return pos;
}