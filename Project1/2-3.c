#include <stdio.h>

void main()
{
	printf("12345678901234567890\n");
	printf("Be happy\n");
	printf("My\tfriend\n"); //My�� ����ϰ� ����ġ�� friend ���
	printf("Goot\bd\tchance\n"); // t�� d�� �ٲٰ� ����ġ �̵� �� chance ���           // (\b) << �齺���̽� ��ĭ ������ �̵�
	printf("Cow\rW\a\n"); // C�� W�� �ٲٰ� ���Ҹ��� ��				// (\r) << �Ǿ����� �̵�			// (\a) << ���Ҹ� ��

	return 0;
}