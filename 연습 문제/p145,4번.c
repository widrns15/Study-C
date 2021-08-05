/* a가 b보다 크면 a를 b로 나눈 몫을 구하고 a가 b보다 작거나 같으면 a를 b로 나눈 나머지를 구해 출력합니다.
	a와 b는 int형 변수로 각각 10과 3으로 초기화합니다. */

#include <stdio.h>

void main()
{
	int a = 10, b = 3;
	int c;
	
	if (a > b)
	{
		c = a / b;
	}
	else
	{
		c = a % b;
	}

	printf("결과: %d \n", c);

	return 0;
}