#include <stdio.h>

void main()
{
	unsigned int a;			// 정수형을 양수 전용으로 쓰고 싶을 땐 unsigned

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	return 0;
}