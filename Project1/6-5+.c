#include <stdio.h>

void main()
{
	int i = 1, sum = 0;

	while (i<=100)
	{
		if ((i%3)==0)
		{
			continue;			// i가 3일때 바로 while문 탈출.
		}
		sum += i;
		i++;
	}

	printf("i= %d, sum= %d \n", i, sum);
}