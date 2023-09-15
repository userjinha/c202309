#include <stdio.h>

int main()
{
	int x = 1;
	// 정수 변수 선언 및 1로 초기화

	printf("x=%d\n", x++);
	// x의 현재값을 출력하고, x를 1증가시킴 ,x=1
        printf("x=%d\n", x++);
	// x의 현재값을 출력하고, x를 다시 1 증가시킴 ,x=2
	printf("x=%d\n", ++x);
	// x를 먼저 1증가시키고, 그 증가된 값을 출력함 ,x=4
	printf("x=%d\n", x--);
	// x의 현재값을 출력하고, 그 후에 x를 1감소시킴 ,x=4
	printf("x=%d\n", x--);
	// x의 현재값을 출력하고, 그 후에 x를 다시 1감소시킴 ,x=3
	printf("x=%d\n", --x);
	// x를 먼저 1감소시키고, 그 감소된 값을 출력함 ,x=1

	return 0;
}
