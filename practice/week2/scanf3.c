#include <stdio.h>
int main(void) {
	char one, two, three;
	printf("문자 3개를 입력하세요 :");
	// 사용자로부터 세개의 문자를 입력하라는 메시지가 표시됨
	scanf_s("%c %c %c", &one, &two, &three);
	// 사용자가 문자를 입력하면 one 등등 변수에 저장됨
	printf("첫 번째 값 : %c\n", one);
	printf("두 번째 값 : %c\n", two);
	printf("세 번째 값 : %c\n", three);
	// %c 형식 지정자를 사용하여 문자를 출력함
	return 0;

}
