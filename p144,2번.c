/* �����ѷ��� 90���� �۰ų� ������ S ����
	90���� ũ�� 100���� �۰ų� ������ M ����
	100���� ũ�� L ����*/

#include <stdio.h>

void main()
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf(" size : %c \n", size);

	return 0;
}