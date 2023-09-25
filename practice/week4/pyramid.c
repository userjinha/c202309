#include <stdio.h>

int main()
{
	int floor;
	// floor 이라는 함수 선언
	printf("몇 층을 쌓겠습니까? (5~100)");
	// 몇 층을 쌓겠습니까를 화면에 출력한다.
	scanf_s("%d", &floor);
	// 입력받은 값을 저장한다.
	
	for (int i = 0; i < floor; i++) 
		// i라는 변수에 0으로 초기화한다, 그리고 i는 floor변수보다 작게 하고 증감연산자가 돌아간다.

		for (int j = 0; j < floor - 1 - i; j++) {
			printf("S");
		}
		// j라는 변수에 0으로 초기화 하고 floor -1 보다 작게 반복된다. 그럼 s의 값이 출력됨
	for (int k = 0; k < k * 2 + 1; k++) {
		printf("*");
	}
		// k라는 변수에 0을 초기화 하고 i*2 +1을 

		printf("\n");
		//줄바꿈을 한다.
	
		return 0;

}