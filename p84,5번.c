/* �̸�, ����, Ű, �������� ������ ������ �迭�� �����ϰ� �ڽ��� �������� �ʱ�ȭ�մϴ�. �׸��� 10�� ���� �������� ����մϴ�.
�̸��� �������� ������ ���� Ű�� 0.5cm �پ��ٰ� �����մϴ�. �������� �̸��� ȫ�浿, ���̴� 17, Ű�� 190.0, �������� AB�� �ʱ�ȭ�� ����Դϴ�.*/

#include <stdio.h>

void main()
{
	char name[20] = "ȫ�浿";			//int ���̳� double ���� ũ�Ⱑ �۾Ƽ� ���� ���ϴµ���
	int age = 17;
	double height = 190.0;
	char blood_type[3] = "AB";

	age = age + 10;
	height = height - 0.5;

	printf("10�� ���� ������... \n");
	printf("�̸� : %s \n", name);
	printf("���� : %d \n", age);
	printf("Ű : %1lf \n", height);
	printf("������ : %s \n", blood_type);

	return 0;
}