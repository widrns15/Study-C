/* �� ������ ������ 259�� ��, ���� ���ǿ� ���� ��հ� ������ ����ϴ� ���α׷��� �ۼ��մϴ�.
	����� 90���̸� A
	����� 90�� �̸� 80�� �̻��̸� B
	����� 80�� �̸� 70�� �̻��̸� C
	�� �̿��� ���� F */

#include <stdio.h>

void main()
{
	double total = 259;
	double ave = total / 3;
	int score;

	if (ave >= 90)
	{
		score = 'A';
	}
	else if (ave >= 80)
	{
		score = 'B';
	}
	else if (ave >= 70)
	{
		score = 'C';
	}
	else
	{
		score = 'F';
	}

	printf(" ��� : %.1lf", ave);
	printf(" ���� : %c", score);

	return 0;
}