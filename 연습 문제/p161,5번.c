#include <stdio.h>

void main()
{
	int age = 25;
	int ar = 95;
	int size;

	if (age < 20)
	{
		if (ar < 85)
		{
			size = 'S';
		}
		else if(ar<95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (ar<90)
		{
			size = 'S';
		}
		else if (ar < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}

	printf("������� %c�Դϴ�. \n", size);

	return 0;
}