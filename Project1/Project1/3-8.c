#include <stdio.h>
#include <string.h>				// strcpy 함수 사용시

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s \n", fruit);
	
	strcpy(fruit, "banana");		// 딸기를 바나나로 바꿈
	printf("%s \n", fruit);

	return 0;
}