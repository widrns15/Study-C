#include <stdio.h>
#include <string.h>				// strcpy �Լ� ����

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s \n", fruit);
	
	strcpy(fruit, "banana");		// ���⸦ �ٳ����� �ٲ�
	printf("%s \n", fruit);

	return 0;
}