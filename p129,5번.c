#include <stdio.h>

void main()
{
	int hour,minute,second;

	double time = 3.76;

	hour = (int)time;
	time -= hour;					// 한 시간이 안되는 부분 다시 저장.
	time *= 60.0;
	minute = (int)time;
	time -= minute;
	time *= 60.0;
	second = (int)time;

	printf("3.76시간은 %d시간 %d분 %d초입니다. \n", hour, minute, second);

	return 0;
	
}