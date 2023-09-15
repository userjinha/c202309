#include <stdio.h>

int main()
{
	int x = +4;
	int y = -2;
	// 정수 변수를 선언하고 초기값을 설정한다

	printf("x + (-y) = %d\n", x + (-y));
	// 수식을 계산하여 결과를 출력
		printf("-x + (+y) = %d\n", -x + (+y));
}
