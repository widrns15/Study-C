#include <stdio.h>

void main()
{
	int height;
	int weight;
	double Dheight;
	double BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d %d", &weight, &height);

	Dheight = (height / 100.0) * (height / 100.0);

	BMI = weight / Dheight;

	printf("BMI : %.lf \n", BMI);

	printf("%s", ((20.0 < BMI)&&(BMI<25.0)) ? "ǥ�� �Դϴ�":"ü�߰����� �ʿ��մϴ�");

	return 0;

}