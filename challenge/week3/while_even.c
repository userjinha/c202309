#include <stdio.h>

int main(void) {
	int i = 0;
	// 변수 선언 및 0으로 초기
	while (i < 10) {
		// 조건을 검사, 조건이 참이면 내부의 코드 블록을 실행합니다. 여기서 i가 10보다 작은 동안 루프가 실행됩니다.

		i++;
		//i 값을 1씩 증가 시킴
		if (i % 2 == 0)

		{
			continue;

		}
		// if 문을 사용하여 i가 짝수인지 확인, 만약 i가 짝수이면 continue 문을 사용하여 루프의 다음 반복으로 넘어감
		printf("Hello World %d \n", i);
		hello world 메시지를  출력하고 현재의 i 값을 출력, 이 부분은 홀수인 i에 대해서만 실행됨
	}
}
