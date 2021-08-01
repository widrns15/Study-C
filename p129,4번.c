#include <stdio.h>

void main()
{
	int Full = 70;
	int Entry = 65;
	double rate;


	rate = (double) Entry / (double) Full * 100.0;			// int형을 double형으로 전환 후 연산 / 100.0 소숫점까지 곱하는 것 잊지말고!!

	printf("입장률 : %.1lf%% \n",rate);						// 프린트문에서 %를 출력하고 싶을 경우 %쓴 후 한번 더 % 작성

	return 0;

}