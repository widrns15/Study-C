#include <stdio.h>
void main()
{
	int a = 5;
	int b = 5;
	int pre, post;
	
	pre = (++a) * 3;		// a=6
	post = (b++) * 3;		// b=6

	printf("�ʱ갪 a = %d, b= %d \n", a, b);
	printf("������: (++a)*3 = %d, ������: (b++)*3 = %d \n", pre, post);

	// �������� ���� ���� �� ����, �������� ���� ���� �� ����.

	return 0;

}