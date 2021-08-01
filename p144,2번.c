/* 가슴둘레가 90보다 작거나 같으면 S 선택
	90보다 크고 100보다 작거나 같으면 M 선택
	100보다 크면 L 선택*/

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