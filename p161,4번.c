#include <stdio.h>

void main()
{
	int a=7;
	int b;

	switch (a)
	{
	case 3:
		b = 1;
		printf("a : %d, b : %d \n", a, b);
		break;
	case 5:
		b = 2;
		printf("a : %d, b : %d \n", a, b);
		break;
	case 7:
		b = 3;
		printf("a : %d, b : %d \n", a, b);
		break;
	default:
		b = 0;
		printf("a : %d, b : %d \n", a, b);
		break;
	}
}