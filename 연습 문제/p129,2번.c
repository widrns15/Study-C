#include <stdio.h>

void main()
{
	char a;

	printf("a = ");
	scanf("%c", &a);
	printf("%s",(a>=0)?"양수입니다":"음수입니다");			// char 로 설정 후, 양수일경우 양수입니다 음수일경우 음수입니다 출력.

	return 0;
}