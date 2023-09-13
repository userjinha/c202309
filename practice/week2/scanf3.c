#include <stdio.h>
main(void) {
	char one, two, three;
	printf("문자 3개를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	return 0;

}