#include <stdio.h>

int hapf(int value); // hapf 함수 원형 선언, 이 함수는 value라는 매개변수를 받고, 정수형 결과를 반환

void main()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10)); // main 함수 내에서 hapf함수를 호출하여 합을 계산
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}
int hapf(int value) // 입력된 value 까지의 합을 계산 하는 함수
{
	int i;
	int hap = 0;

	for (i = 1; i <= value; i = i + 1) {
		hap = hap + i;
	}
	// for루프를 기반으로 hap값을 결정
	return hap; // 계산된 값을 반환한다.
}
