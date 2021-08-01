#include <stdio.h>

void main()
{
	int a = 10;
	int b = 12;

	printf("a & b : %d \n", a & b);			// 두 비트가 모두 1인 경우 1로 계산
	printf("a ^ b : %d \n", a ^ b);			// 두 비트가 서로 다른 경우 1로 계산
	printf("a | b : %d \n", a | b);			// 두 비트 중에 하나라도 참이면 1로 계산
	printf("~a : %d \n", ~a);				// 1은 0으로, 0은 1로 바꿈
	printf("a << 1 : %d \n", a << 1);		// 비트 왼쪽으로 한 칸 이동
	printf("a >> 2 : %d \n", a >> 2);		// 비트 오른쪽으로 두 칸 이동

	return 0;
}