#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	// 정수 변수 x와 y를 선언하고 초기값을 설정
	int z;
	// 정수 변수 z를 선언

	z = x + y;
	printf("z = x + y = %d\n", z);
	// x와 y의 합을 계산하여 z에 저장하고, z값 출력
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}
