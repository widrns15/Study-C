#include <stdio.h>
void main()
{
	char ch;
	
	printf("문자 입력 : ");
	scanf("%c",&ch);
	printf("%c문자의 아스키 코드값은 %d입니다. \n",ch,ch);

	return 0;
}