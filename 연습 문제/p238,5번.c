#include <stdio.h>

void main()
{
	int ary[10] = { 1,2 };

	for (int i = 0; i < 10; i++)
	{
		if (i>=2)
		{
			ary[i] = ary[i - 2] + ary[i - 1];			// a[i+2]=ary[i]+ary[i+1] ������ ǥ�� ����
		}
		printf("%5d", ary[i]);
	}
}