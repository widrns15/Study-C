#include <stdio.h>

void main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for ( i = 0; i < 5; i++)
	{
		tot += score[i];
	}

	avg = tot / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf \n", avg);

	return 0;
}