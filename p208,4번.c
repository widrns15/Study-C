/* �ؼ� 2�� ���� 10�� �ް������� �޾� 2^10�� ���Ͽ� ��ȯ�ϴ� �Լ��� ����� main �Լ����� ȣ���Ͽ�
����ϴ� ���α׷��� ����ϴ�. �Լ����� my_power�� �մϴ�. */

#include <stdio.h>

int my_power(int x, int y);

void main()
{
	int a = 2, b = 10;
	int res;

	res = my_power(a, b);
	printf("%d", res);

	return 0;
}

int my_power(int e, int d)
{
	int temp;
	temp = 1<<10;				// x<<y = x * 2^y

	return temp;				// temp�� ���� ��ȯ
}


/* pow �Լ�

double x = pow(2.0,10.0) = 2^10

*/