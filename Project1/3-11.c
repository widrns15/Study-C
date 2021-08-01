#include <stdio.h>
void main()
{
	int age;
	double height; // double은 f가 아닌 lf

	printf("나이와 키를 입력하시오 : ");
	scanf("%d %lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lf입니다. \n", age, height);

	return 0;

}