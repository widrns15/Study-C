#include <stdio.h>

void main()
{
	unsigned int a;			// �������� ��� �������� ���� ���� �� unsigned

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	return 0;
}