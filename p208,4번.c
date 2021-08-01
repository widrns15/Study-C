/* 밑수 2와 지수 10을 메개변수로 받아 2^10을 구하여 반환하는 함수를 만들고 main 함수에서 호출하여
출력하는 프로그램을 만듭니다. 함수명은 my_power로 합니다. */

#include <stdio.h>

int my_power(int x, int y);

void main()
{
	int a = 2, b = 10;
	int res;

	res = my_power(a, b);
	printf("%d", res);

	return 0;
}

int my_power(int e, int d)
{
	int temp;
	temp = 1<<10;				// x<<y = x * 2^y

	return temp;				// temp의 값을 반환
}


/* pow 함수

double x = pow(2.0,10.0) = 2^10

*/