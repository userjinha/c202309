#include <stdio.h>

int main(void) {
	float pil = 3.1415926f;
	printf("%.5f", pil);
	// 5는 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림
	// %.nf : 값이 실수일 때, n은 출력할 소수점 이하 자릿수, n+1 자리에서 반올림
	double pi2 = 3.141;
	printf("%.31f", pi2);
	// 31은 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림
	// %.nf : 값이 실수일 때, n은 출력할 소수점 이하 자릿수, n+1 자리에서 반올림, 자료형 [(실수형)double] 

	return 0;

}

