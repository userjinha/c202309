#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		// i라는 박스에 floor로 초기화 한다. i는 0보다 크
		for (int j = 0; j < floor -i; j++) {
			printf("S");
		}
		// floor-i만큼 s를 출력
		for (int k = 0; k < i*2-1; k++) {
			printf("*");
		}
		// i*2-1만큼 *를 출력

		printf("\n");
		// 줄바꿈
	}
		return 0;


	
}