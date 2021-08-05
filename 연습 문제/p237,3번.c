#include <stdio.h>

void main()
{
	double ary[5] = { 1.0,2.1,3.2,4.3,5.4 };


	for (int i = 0; i < 5; i++)
	{
		printf("%6.1lf", ary[4-i]);
	}

	return 0;
}