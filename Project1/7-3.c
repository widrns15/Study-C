#include <stdio.h>

void print_char(char ch, int cnt);		// �Լ� ����

int main(void)
{
	printf_char('@', 5);				// ���ڿ� ���ڸ� �ְ� �Լ� ȣ��

	return 0;
}

void print_char(char ch, int cnt)			// �Ű������� ������ ��ȯ���� ����.
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);					// �Ű����� ch�� ���� ���� ���.
	}
}