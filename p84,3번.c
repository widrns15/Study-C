/* 국어, 영어, 수학 점수를 저장할 변수를 선언하고 각각 70,80,90점으로 초기화합니다.
총점을 저장할 변수를 선언하여 세 과목의 합을 구하고 세 과목의 점수와 총점을 출력하는 프로그램 작성*/

#include <stdio.h>

void main()
{
	int a = 70;
	int b = 80;
	int c = 90;

	int sum = 0;

	sum = a + b + c;

	printf("국어 = %d \n", a);
	printf("영어 = %d \n", b);
	printf("수학 = %d \n", c);
	printf("총점 = %d \n", sum);

	return 0;


}