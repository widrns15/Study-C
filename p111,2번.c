#include <stdio.h>
void main()
{
	int a, b;
	int sum;
	double ave;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	ave = sum / 2.0;		// 평균 계산, sum이 정수형이므로 2로 나누면 안됌.

	printf("평균 : %.1lf",ave);

	return 0;
}