#include <stdio.h>

void main()
{
	int i = 1, sum = 0;

	while (i<=100)
	{
		if ((i%3)==0)
		{
			continue;			// i�� 3�϶� �ٷ� while�� Ż��.
		}
		sum += i;
		i++;
	}

	printf("i= %d, sum= %d \n", i, sum);
}