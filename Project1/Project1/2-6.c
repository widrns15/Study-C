#include <stdio.h>

void main()
{
	printf("%.1f\n", 1e6);
	printf("%.7f\n", 3.14e-5);		// 1.0 x 10^6 >> 1.0 x e x 6

	return 0;
}