/* 키가 187.5cm 이상이고 몸무게가 80.0kg 미만이면 ok를 출력하고 그 이외의 경우에는 cansel을 출력하는
	프로그램을 작성합니다. 키는 179.5, 몸무게는 75.0으로 double형 변수에 초기화합니다. */

#include <stdio.h>

void main()
{
	double height = 179.5;
	double weight = 75.0;

	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("ok");
	}
	else
	{
		printf("cancel");
	}

	return 0;
}