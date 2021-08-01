#include <stdio.h>
void main()
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);		// 배열엔 &을 붙이지않음.
	printf("%s의 학점은 %c입니다. \n", name, grade);

	return 0;
}