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
		printf("랜덤 수 : %d < 이거 원래 비밀인뎅..\n", ran);
	}

	
	
	while (1)
	
	{
		printf("숫자 입력(1부터 30까지) : ");
		scanf("%d", &a);

		if (a==ran)
		{
			count += 1;
			printf("정답입니다! \n");
			printf("시도한 횟수는 %d회 입니다. \n", count);
			break;
		}

			else if (a > ran)
			{
				count += 1;
				printf("%d보다 작습니다. \n\n", a);
			}

			else
			{
				count += 1;
				printf("%d보다 큽니다. \n\n", a);
			}

			
	}
	
	
}