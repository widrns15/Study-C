#include <stdio.h>

void main()
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f \n", ft);
	printf("double형 변수의 값 : %.20lf \n", db);			// 유효숫자가 많을 경우 double 사용

	return 0;
}