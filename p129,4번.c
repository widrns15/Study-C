#include <stdio.h>

void main()
{
	int Full = 70;
	int Entry = 65;
	double rate;


	rate = (double) Entry / (double) Full * 100.0;			// int���� double������ ��ȯ �� ���� / 100.0 �Ҽ������� ���ϴ� �� ��������!!

	printf("����� : %.1lf%% \n",rate);						// ����Ʈ������ %�� ����ϰ� ���� ��� %�� �� �ѹ� �� % �ۼ�

	return 0;

}