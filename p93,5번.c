#include <stdio.h>
void main()
{
	char name[20];
	int age;
	double height;

	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("���̿� Ű(cm) �Է� : ");
	scanf("%d %lf", &age, &height);
	
	printf("%s, %d��, %.1lfcm",name,age,height);

	return 0;
}