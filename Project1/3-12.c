#include <stdio.h>
void main()
{
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);		// �迭�� &�� ����������.
	printf("%s�� ������ %c�Դϴ�. \n", name, grade);

	return 0;
}