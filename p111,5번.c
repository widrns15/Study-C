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
	m50 = change & 50;				//�̷��� �ϸ� m500�� 258�̳���, ���� �߰��� ������ �־���߉�
	m10 = change & 10;
	*/

	int rest;				// ������� ������ ��ȭ!!!

	m500 = change / 500;
	rest = change % 500;
	m100 = rest / 100;		// = (change % 500) / 100
	rest = rest % 100;
	m50 = rest / 50;		// = (change % 100) / 50
	rest = rest % 50;
	m10 = rest / 10;		// = (change % 50) / 10
	rest = rest % 10;


	printf("�ǶǸ� ��ü �ݾ� : %d�� \n", toto);
	printf("�ǲǹ� ��ü �ݾ� : %d�� \n", gogo);
	printf("�Ž����� : %d \n", change);
	printf("�Ž����� ������ �ּ� ����... \n");
	printf(" 500�� %d��, 100�� %d��, 50�� %d��, 10�� %d�� \n", m500, m100, m50, m10);

	return 0;
}