#include <stdio.h>

void main()
{
	int i, j,z;


	for ( i = 0; i <5; i++)
	{
		for (j = 0; j <4-i; j++)
		{
			printf(" ");
		}

		z = 1;
		for ( j = 0; j < (2*i)+1; j++)
		{
			printf("%d", z);
			z++;
		}
		printf("\n");
	}
}