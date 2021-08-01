#include <stdio.h>

void main()
{
	int a,b,c;										// a = 3000, b = 200, c = 10
	int change;										// 거스름돈
	int c5000,c1000,c500,c100,c50,c10;				// 각각 5000원권 ~ 10원 동전
	int total;										// 구매한 총 금액
	int rest;										// 임시 잔돈

	printf("세 개의 물건값을 입력하세요 :");

	scanf("%d %d %d", &a, &b, &c);
	
	total = a + b + c;

	change = 10000 - total;
	printf("거스름돈은 %d원입니다. \n", change);
	
	c5000 = change / 5000;
	rest = change % 5000;
	c1000 = rest / 1000;
	rest = rest % 1000;
	c500 = rest / 500;
	rest = rest % 500;
	c100 = rest / 100;
	rest = rest % 100;
	c50 = rest / 50;
	rest = rest % 50;
	c10 = rest / 10;
	rest = rest % 10;

	printf("오천원권 : %d장 \n 천원권 : %d장 \n 오백원짜리 동전 : %d개 \n 백원짜리 동전 : %d개 \n 오십원짜리 동전 : % d개 \n 십원짜리 동전 : % d개 \n",c5000,c1000,c500,c100,c50,c10);


		return 0;
}
