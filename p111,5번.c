#include <stdio.h>

void main()
{
	int toto = 70*2;
	int gogo = 30*3;
	int jum = 1000;
	int m500, m100, m50, m10;
	int change = jum - toto - gogo;
	
	/*
	m500 = change & 500;
	m100 = change & 100;
	m50 = change & 50;				//이렇게 하면 m500이 258이나옴, 따라서 중간에 변수를 넣어줘야됌
	m10 = change & 10;
	*/

	int rest;				// 나누기와 나머지 조화!!!

	m500 = change / 500;
	rest = change % 500;
	m100 = rest / 100;		// = (change % 500) / 100
	rest = rest % 100;
	m50 = rest / 50;		// = (change % 100) / 50
	rest = rest % 50;
	m10 = rest / 10;		// = (change % 50) / 10
	rest = rest % 10;


	printf("또또면 전체 금액 : %d원 \n", toto);
	printf("꽁꽁바 전체 금액 : %d원 \n", gogo);
	printf("거스름돈 : %d \n", change);
	printf("거스름돈 동전의 최소 개수... \n");
	printf(" 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개 \n", m500, m100, m50, m10);

	return 0;
}