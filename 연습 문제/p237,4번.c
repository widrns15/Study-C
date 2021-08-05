#include <stdio.h>

void main()
{
	int A[3] = { 1,2,3 };
	int B[10];

	for (int i = 0; i < 10; i++)
	{
		B[i] = A[i % 3];

		printf("%5d", B[i]);
	}
}