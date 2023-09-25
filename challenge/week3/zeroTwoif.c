#include <stdio.h>

int main()
{
	int num = 0;
	// num의 변수선언 및 0으로 초기화
	printf("숫자를 입력하시오 : ");
	// 창에 숫자를 입력하시오를 출력한다.
	scanf_s("%d", &num);
	// 입력받은 값을 num에 저장한다. 

	if (num == 0) 
	
	{
		printf("zero");
	}
	// 만약 num이 0이면 zero가 출력된다.
	else if (num == 1) {
		printf("one");
	}
	// 만약 num이 1이면 one이 출력된다.
	else if (num == 2) {
		printf("two");
	}
	// 만약 num이 2이면 two가 출력된다.

	else 
		printf("not 0 ~2");
	// 다른 것을 입력받았음녀 not 0~2라고 출력된다.

		return 0;
}
