#include <stdio.h>

void main()
{

	int a;
	int sum = 0;

	printf("��� �Է� : ");				// ó���� �ϴ� ���� ����
	scanf("%d", &a);

	while (a>0)
	{
		sum += a;
		printf("��� �Է� : ");
		scanf("%d", &a);
	}
	printf("������ �� : %d \n", sum);
}