#include <stdio.h>

void main()
{

	int a;
	int sum = 0;

	printf("양수 입력 : ");				// 처음에 일단 조건 실행
	scanf("%d", &a);

	while (a>0)
	{
		sum += a;
		printf("양수 입력 : ");
		scanf("%d", &a);
	}
	printf("누적된 값 : %d \n", sum);
}