#include <stdio.h>

void main()
{
	char a;

	printf("a = ");
	scanf("%c", &a);
	printf("%s",(a>=0)?"����Դϴ�":"�����Դϴ�");			// char �� ���� ��, ����ϰ�� ����Դϴ� �����ϰ�� �����Դϴ� ���.

	return 0;
}