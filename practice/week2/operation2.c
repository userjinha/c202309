#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	// 정수 변수를 선언하고, 초기값을 설정
	int z;
	// 결과를 저장할 정수 변수 선언

	z = (x+y) * (x-y);
	// 주어진 식을 계산하고 그 결과를 z에 저장
	printf("z = (x + y) * (x - y) = %d\n", z);
	// 형식의 문자열과 함께 z의 값을 출력

	z = (x*y) + (x/y);
	printf("z = (x * y) + (x / y) = %d\n", z);

	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}
