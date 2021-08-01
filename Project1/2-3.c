#include <stdio.h>

void main()
{
	printf("12345678901234567890\n");
	printf("Be happy\n");
	printf("My\tfriend\n"); //My를 출력하고 탭위치에 friend 출력
	printf("Goot\bd\tchance\n"); // t를 d로 바꾸고 탭위치 이동 후 chance 출력           // (\b) << 백스페이스 한칸 전으로 이동
	printf("Cow\rW\a\n"); // C를 W로 바꾸고 벨소리를 냄				// (\r) << 맨앞으로 이동			// (\a) << 벨소리 냄

	return 0;
}