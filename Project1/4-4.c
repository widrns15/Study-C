#include <stdio.h>
void main()
{
	int a = 5;
	int b = 5;
	int pre, post;
	
	pre = (++a) * 3;		// a=6
	post = (b++) * 3;		// b=6

	printf("초깃값 a = %d, b= %d \n", a, b);
	printf("전위형: (++a)*3 = %d, 후위형: (b++)*3 = %d \n", pre, post);

	// 전위형은 먼저 증감 후 연산, 후위형은 먼저 연산 후 증감.

	return 0;

}