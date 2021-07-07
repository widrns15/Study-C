#include <stdio.h>

void main()
{
	char fruit[20] = "strawberry";

		printf("딸기 : %s \n", fruit);
		printf("딸기쨈 : %s %s \n", fruit, "jam");
		printf("제일 좋아하는 과일 : %s \n", fruit);

	return 0;

	// fruit = "banana"; 이런 식으로 중간에 변수 안됌!!
}