#include <stdio.h>

void main()
{
	int hour,minute,second;

	double time = 3.76;

	hour = (int)time;
	time -= hour;					// �� �ð��� �ȵǴ� �κ� �ٽ� ����.
	time *= 60.0;
	minute = (int)time;
	time -= minute;
	time *= 60.0;
	second = (int)time;

	printf("3.76�ð��� %d�ð� %d�� %d���Դϴ�. \n", hour, minute, second);

	return 0;
	
}