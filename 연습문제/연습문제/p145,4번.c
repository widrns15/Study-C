/* a�� b���� ũ�� a�� b�� ���� ���� ���ϰ� a�� b���� �۰ų� ������ a�� b�� ���� �������� ���� ����մϴ�.
	a�� b�� int�� ������ ���� 10�� 3���� �ʱ�ȭ�մϴ�. */

#include <stdio.h>

void main()
{
	int a = 10, b = 3;
	int c;
	
	if (a > b)
	{
		c = a / b;
	}
	else
	{
		c = a % b;
	}

	printf("���: %d \n", c);

	return 0;
}