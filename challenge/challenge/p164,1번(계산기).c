/* Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷��� �ۼ��մϴ�. ���� ��Ģ���길 �Է��մϴ�
	�����ȣ(+, -, *, /)�� �ϳ��� �����Դϴ�. */

#include <stdio.h>

void main()
{
	int a, c;
	char b;


	printf("��Ģ ���� �Է�(����) : ");
	scanf("%d%c%d", &a, &b, &c);

	switch (b)
	{
	case '+':
		printf("%d+%d=%d", a, c, a + c);
		break;
	case '-':
		printf("%d-%d=%d", a, c, a - c);
		break;
	case '*':
		printf("%d*%d=%d", a, c, a * c);
		break;
	case '/':
		printf("%d/%d=%d", a, c, a / c);
		break;
	default:
		printf("False");
		break;
	}
}