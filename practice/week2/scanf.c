#include <stdio.h>

main(void) {
	int input;
	// input의 정수형 번수 선언, 이 변수는 사용자로 부터 입력받은 값을 저장
	printf("값을 입력하세요 : ");
	// 함수를 사용하여 사용자에게 메시지를 표시
	scanf_s("%d", &input);
	// 함수를 사용하여 사용자로부터 정수 값을 입력받음 
	printf("입력값 : %d\n", input);
	// 람수를 사용하여 입력받은 값을 출력함
	return 0;
}
