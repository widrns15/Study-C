#include <stdio.h>

void main()
{
	int height;
	int weight;
	double Dheight;
	double BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d %d", &weight, &height);

	Dheight = (height / 100.0) * (height / 100.0);

	BMI = weight / Dheight;

	printf("BMI : %.lf \n", BMI);

	printf("%s", ((20.0 < BMI)&&(BMI<25.0)) ? "표준 입니다":"체중관리가 필요합니다");

	return 0;

}