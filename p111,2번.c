#include <stdio.h>
void main()
{
	int a, b;
	int sum;
	double ave;

	printf("�� ������ ���� : ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	ave = sum / 2.0;		// ��� ���, sum�� �������̹Ƿ� 2�� ������ �ȉ�.

	printf("��� : %.1lf",ave);

	return 0;
}