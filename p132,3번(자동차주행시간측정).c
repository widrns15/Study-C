#include <stdio.h>

void main()
{
	int km,kmh;
	int hour, minute, second;
	float res;

	printf("거리와 속력 입력: ");
	
	scanf("%d %d", &km, &kmh);

	res = (float)km / (float)kmh;

	hour = (int)res;
	res -= hour;
	res *= 60.0;
	minute = (int)res;
	res -= minute;
	res *= 60.0;
	second = (float)res;
	

	printf("소요 시간은 %d시간 %d분 %.3f초입니다. \n", hour, minute, (float)second);

	return 0;
}