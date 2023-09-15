#include <stdio.h>

int main(void) {
	char str[256];
	// 256개의 character를 담을수 있는 공간을 선언하고 이름은 str으로 지정함
	scanf_s("%s", str, sizeof(str));
	// %s : 문자열을 입력받기 위한 형식 지정자
	// str : 배열에 입력된 문자열을 저장
	// sizeof(str) : str의 사이즈를 반환하는 함수, 입력할 수 는 최대 문자수를 제한
 	printf("%s\n", str);
	// %s : 문자열을 출력하기 위한 형식 지정자이며, str 배열에 저장된 문자열이 출력
	return 0;
}
