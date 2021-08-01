#include <stdio.h>

void main()
{
	double inch;
	inch = 2.54;
	double x;
	x = 200/inch;
	
	printf("2미터는 %.1lf인치입니다", x);

	return 0;
}