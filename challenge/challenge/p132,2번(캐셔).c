#include <stdio.h>

void main()
{
	int a,b,c;										// a = 3000, b = 200, c = 10
	int change;										// �Ž�����
	int c5000,c1000,c500,c100,c50,c10;				// ���� 5000���� ~ 10�� ����
	int total;										// ������ �� �ݾ�
	int rest;										// �ӽ� �ܵ�

	printf("�� ���� ���ǰ��� �Է��ϼ��� :");

	scanf("%d %d %d", &a, &b, &c);
	
	total = a + b + c;

	change = 10000 - total;
	printf("�Ž������� %d���Դϴ�. \n", change);
	
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

	printf("��õ���� : %d�� \n õ���� : %d�� \n �����¥�� ���� : %d�� \n ���¥�� ���� : %d�� \n ���ʿ�¥�� ���� : % d�� \n �ʿ�¥�� ���� : % d�� \n",c5000,c1000,c500,c100,c50,c10);


		return 0;
}
