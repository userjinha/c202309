#include <stdio.h>
int main(void) {
	int one, two, three;
	// 정수형 변수 선언
	printf("정수 3개를 입력하세요 : ");
	// 함수를 사용하여 사용자에게 메시지 표시
	scanf_s(" % d % d % d", &one, &two, &three);
	// %d를 사용하여 정수 값을 입력하라고 지시, 입력된 값은 &one.. 를 통해 각 변수에 저장됨
	
	printf("첫 번재 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	// 함수를 사용하여 입력된 값을 출력, 즉 one 변수의 값이 출력됨
		return 0;
}
