#include <stdio.h>

double centi_to_meter(double x, double y);

void main()
{
	double a=187, b=100;
	double res;

	res = centi_to_meter(a,b);
	printf("%.2lfm", res);

	return 0;
}

double centi_to_meter(double x, double y)
{
	double temp;
	temp = x / y;

	return temp;
}