#include <stdio.h>

void main()
{
	int kor = 3, eng=5, math=4;
	double rekor = 3.8, reeng = 4.4, remath = 3.9;
	int sum = kor + eng + math;
	double resum = rekor + reeng + remath;
	double ave = resum/3.0;

	int res;
	res = (sum >= 10) && (ave > 4.0);

		printf("%d", res);

	return 0;


}