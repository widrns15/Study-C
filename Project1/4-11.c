#include <stdio.h>

void main()
{
	int a = 10, b = 20;
	int res;
										// 콤마 연산자 > 수행된 가장 오른쪽의 결과값이 저장됌.
	res = (++a, ++b);					// 차례로 연산이 수행되며 결과적으로 res에 저장되는 값은
										// 증가된 b의 값이다.		만약 res = ++a,++b라면
										// res에는 증가된 a값이 저장되고, b에는 1만큼 커진 값이 저장됌.
	printf("a:%d, b:%d \n", a, b);
	printf("res:%d \n", res);

	return 0;
}