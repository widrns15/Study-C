#include <stdio.h>

void main()
{
	int a = 10;
	int b = 12;

	printf("a & b : %d \n", a & b);			// �� ��Ʈ�� ��� 1�� ��� 1�� ���
	printf("a ^ b : %d \n", a ^ b);			// �� ��Ʈ�� ���� �ٸ� ��� 1�� ���
	printf("a | b : %d \n", a | b);			// �� ��Ʈ �߿� �ϳ��� ���̸� 1�� ���
	printf("~a : %d \n", ~a);				// 1�� 0����, 0�� 1�� �ٲ�
	printf("a << 1 : %d \n", a << 1);		// ��Ʈ �������� �� ĭ �̵�
	printf("a >> 2 : %d \n", a >> 2);		// ��Ʈ ���������� �� ĭ �̵�

	return 0;
}