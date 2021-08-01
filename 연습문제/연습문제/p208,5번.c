/* 32767이 소수인지 아닌지를 판단하여 출력하는 프로그램을 작성합니다. 단, 정수를 인수로 받아 소수면 1을 반환하고
소수가 아니면 0을 반환하는 함수를 만들고 main 함수에서 호출하여 작성합니다. 함수명은 prime_check로 합니다. */


#include <stdio.h>

int prime_check(int x, int y);

void main()
{
	int a = 32767, b = 2;
	int res,i;

	for (i = 2; i <= 32767 / 2; i++)
	{
		res = prime_check(a, b);

		if ((a % b) == 0)
		{
			printf("소수가 아닙니다. \n", res);
			break;
		}
		if ((a % b) == 1)
		{
			printf("소수입니다. \n", res);
			break;
		} 
	}

	return 0;

}

int prime_check(int c, int d)
{
	int temp;
	temp = c % d;

	return temp;
}
