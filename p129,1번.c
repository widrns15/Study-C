#include <stdio.h>

void main()
{
	double a = 3.7;
	double b = (int)a;
	double c = (int)(a + 0.5);

	printf("b = %.1lf \n", b);
	printf("c = %.1lf \n", c);

	return 0;

}