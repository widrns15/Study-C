#include <stdio.h>
void main()
{
	int age;
	double height; // double�� f�� �ƴ� lf

	printf("���̿� Ű�� �Է��Ͻÿ� : ");
	scanf("%d %lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lf�Դϴ�. \n", age, height);

	return 0;

}