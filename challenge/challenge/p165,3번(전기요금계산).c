/* 키보드로 전기 사용량(kw)를 입력받으면 사용 요금을 출력하는 프로그램을 작성합니다.
	전기요금의 계산은 다음과 같이 합니다.
	
	기본요금 + 사용량 * kw당 요금 + 세금	예) 270kw 사용시 요금 계산 :
	(100*52.0)+(100*88.5)+(70*127.8)

	세금은 전체 사용요금의 9%이며, 요금 적용기준은 다음과 같습니다. 
	

	[기본요금]					[kw당 요금]					

	1~100kw : 370				처음 100kw까지 : 52.0
	101~200kw : 600				다음 100kw까지 : 88.5
	201~300kw : 1130			다음 100kw까지 : 127.8
	301~400kw : 2710			다음 100kw까지 : 184.3
	401~500kw : 5130			다음 100kw까지 : 274.3
	500kw 초과 : 9330			500kw 초과 : 494.0						   */

#include <stdio.h>

void main()

{
	double use=0;
	double gibon=0;
	double kw=0;
	double tax=0;
	double don=0;
	double kw1 = 52.0, kw2 = 88.5, kw3 = 127.8, kw4 = 184.3, kw5 = 274.3, kw6 = 494.0;

	printf("전기 사용량을 입력하세요(kw) : ");
		scanf("%lf", &use);
	
	if (use<=100)
	{
		gibon = 370, kw= use*kw1;
	}
	else if (use <= 200)
	{
		gibon = 600, kw = (100 * kw1) + ((use - 100) * kw2);
	}
	else if (use <= 300)
	{
		gibon = 1130, kw = (100 * kw1) + (100*kw2)+((use-200)*kw3);
	}
	else if (use <= 400)
	{
		gibon = 2710, kw = (100 * kw1) + (100 * kw2) + (100* kw3)+ ((use - 300) * kw4);
	}
	else if (use <= 500)
	{
		gibon = 5130, kw = (100 * kw1) + (100 * kw2) + (100 * kw3) + (100 * kw4)+((use - 400) * kw5);
	}
	else 
	{
		gibon = 9330, kw = (100 * kw1) + (100 * kw2) + (100 * kw3) + (100 * kw4) + (100 * kw5) + ((use - 500) * kw6);
	}

	tax = (gibon + kw) * 0.09;

	don = gibon + kw + tax;

	printf("이번 달 요금은 %.0lf원입니다. \n", don);
}

	



