#include <stdio.h>

void main()
{
	int km,kmh;
	int hour, minute, second;
	float res;

	printf("�Ÿ��� �ӷ� �Է�: ");
	
	scanf("%d %d", &km, &kmh);

	res = (float)km / (float)kmh;

	hour = (int)res;
	res -= hour;
	res *= 60.0;
	minute = (int)res;
	res -= minute;
	res *= 60.0;
	second = (float)res;
	

	printf("�ҿ� �ð��� %d�ð� %d�� %.3f���Դϴ�. \n", hour, minute, (float)second);

	return 0;
}