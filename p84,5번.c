/* 이름, 나이, 키, 혈액형을 저장할 변수나 배열을 선언하고 자신의 프로필을 초기화합니다. 그리고 10년 후의 프로필을 출력합니다.
이름과 혈액형은 변함이 없고 키는 0.5cm 줄어든다고 가정합니다. 실행결과는 이름은 홍길동, 나이는 17, 키는 190.0, 혈액형은 AB로 초기화한 경우입니다.*/

#include <stdio.h>

void main()
{
	char name[20] = "홍길동";			//int 형이나 double 형은 크기가 작아서 담지 못하는듯함
	int age = 17;
	double height = 190.0;
	char blood_type[3] = "AB";

	age = age + 10;
	height = height - 0.5;

	printf("10년 후의 프로필... \n");
	printf("이름 : %s \n", name);
	printf("나이 : %d \n", age);
	printf("키 : %1lf \n", height);
	printf("혈액형 : %s \n", blood_type);

	return 0;
}