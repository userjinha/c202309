#include <stdio.h>
#define PI 3.1415926
// 전처리기 지시문 사용, PI상수 정
int main(void) {
	CONST int YEAR = 1972;
	// const한정자 사용, YEAR를 1972으로 선언
	printf("C 언어가 발표된 연도: %d \n", YEAR);
	// YEAR = 1973;, printf함수를 사용하여 c언어가 발표된 연도 : 와 year변수의 값을 출력
	// %d는 정수 값을 출력하기 위한 서식 지정자

	printf("원의 넓이 구하는 공식: %.2f x 반지름^2", PI);
	// %.2f는 소수점 아래 두자리까지 출력하기 위한 서식 지정자

	return 0;
}
