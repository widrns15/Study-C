#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define max 30

void main()
{
	int ran=0;
	int a = 0, count = 0;
	int p = 0;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 1; i++)
	{
		ran = rand() % max+1;
		printf("���� �� : %d < �̰� ���� ����ε�..\n", ran);
	}

	
	
	while (1)
	
	{
		printf("���� �Է�(1���� 30����) : ");
		scanf("%d", &a);

		if (a==ran)
		{
			count += 1;
			printf("�����Դϴ�! \n");
			printf("�õ��� Ƚ���� %dȸ �Դϴ�. \n", count);
			break;
		}

			else if (a > ran)
			{
				count += 1;
				printf("%d���� �۽��ϴ�. \n\n", a);
			}

			else
			{
				count += 1;
				printf("%d���� Ů�ϴ�. \n\n", a);
			}

			
	}
	
	
}