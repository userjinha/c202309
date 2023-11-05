#include <stdio.h>

// 인수를 받지 않고 반환값을 정의하지 않기위해 void를 사용
int main(void)

{// i로 정수형 변수 선언 및 0으로 초기화
	int i = 0;
	// i로 정수형 변수 선언 및 0으로 초기화
		do {
			// 코드 블록을 실행한 다음 조건을 검사
			i++;
			// i의 값을 1씩 증가시킴
			if (i % 2 == 0) {
				continue;// if 문을 사용하여 i가 짝수인지 확인, i가 짝수이면 continue 문을 사용하여 다음 반복으로 넘어감
			}

			// hello world메시지를 출력하고 현재의 i 값을 출력, 이 부분은 홀수인 i에 대해서만 실행
			printf("Hello World %d \n", i);
			// i가 10이 될때까지 "hello world" 메시지가 출력
		} while (i < 10);

}
