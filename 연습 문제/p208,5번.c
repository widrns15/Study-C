/* 32767�� �Ҽ����� �ƴ����� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��մϴ�. ��, ������ �μ��� �޾� �Ҽ��� 1�� ��ȯ�ϰ�
�Ҽ��� �ƴϸ� 0�� ��ȯ�ϴ� �Լ��� ����� main �Լ����� ȣ���Ͽ� �ۼ��մϴ�. �Լ����� prime_check�� �մϴ�. */


#include <stdio.h>

int prime_check(int x, int y);

void main()
{
	int a = 32767, b = 2;
	int res,i;

	for (i = 2; i <= 32767 / 2; i++)
	{
		res = prime_check(a, b);

		if ((a % b) == 0)
		{
			printf("�Ҽ��� �ƴմϴ�. \n", res);
			break;
		}
		if ((a % b) == 1)
		{
			printf("�Ҽ��Դϴ�. \n", res);
			break;
		} 
	}

	return 0;

}

int prime_check(int c, int d)
{
	int temp;
	temp = c % d;

	return temp;
}
