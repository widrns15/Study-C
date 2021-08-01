/* 세 과목의 총점이 259일 때, 다음 조건에 따라 평균과 학점을 출력하는 프로그램을 작성합니다.
	평균이 90점이면 A
	평균이 90점 미만 80점 이상이면 B
	평균이 80점 미만 70점 이상이면 C
	그 이외의 경우는 F */

#include <stdio.h>

void main()
{
	double total = 259;
	double ave = total / 3;
	int score;

	if (ave >= 90)
	{
		score = 'A';
	}
	else if (ave >= 80)
	{
		score = 'B';
	}
	else if (ave >= 70)
	{
		score = 'C';
	}
	else
	{
		score = 'F';
	}

	printf(" 평균 : %.1lf", ave);
	printf(" 학점 : %c", score);

	return 0;
}