/* Ű�� 187.5cm �̻��̰� �����԰� 80.0kg �̸��̸� ok�� ����ϰ� �� �̿��� ��쿡�� cansel�� ����ϴ�
	���α׷��� �ۼ��մϴ�. Ű�� 179.5, �����Դ� 75.0���� double�� ������ �ʱ�ȭ�մϴ�. */

#include <stdio.h>

void main()
{
	double height = 179.5;
	double weight = 75.0;

	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("ok");
	}
	else
	{
		printf("cancel");
	}

	return 0;
}