

int multiF(int value); // multiF함수원형 선언 및 value하나의 정수 매개변수를 받고, 
// 정수형 결과를 반환합니다.

// main 함수에서 multiF함수를 호출하여 각각의 곱을 계산하고, 출력
void main() {
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}

int multiF(int value)
{
	int i = 1;
	int f = 1;

	// i를 증가시키고 f를 초기화 시키는 식으로 계산
	while (i <= value) {
		
		f = f * i;
		i = i + 1;
	}

	
	return f; // f를 multiF함수에서 반환
}
