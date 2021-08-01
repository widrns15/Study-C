#include <stdio.h>

void main()
{
	int a=2;

	if (a < 0)
	{
		a = -a;
	}
	else if (a % 2 == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}

	printf(" a : %d \n", a);

	return 0;
}