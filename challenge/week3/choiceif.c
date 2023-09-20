#include <stdio.h>

int main() {
	int choice;
	//choice 라는 변수 선언

	printf("1. 파일 저장\n ");
	// 1. 파일저장이 출력
	
	printf(" 2. 저장 없이 닫기\n");
	// 2. 저장 없이 닫기가 출력
	printf("3. 종료\n");
	// 3. 종료가 출력됨
	scanf_s("%d", &choice);
	// 입력된 값이 값이 choice에 저장됨

	if (choice = 1) {
		printf("파일을 저장합니다.");
		// choice가 1이면 파일을 저장합니다가 띈다.
	}
	else if (choice =2) {
		printf(" 저장 없이 닫습니다.");
		// choice가 2이면 저장 없이 닫습니다가 띈다.
	}
	else if (choice =3) {
		printf(" 종료합니다.");
	}
		 // 3이면 종료합니다가 띈다.
	else {
		printf("잘못 입력하셨습니다.");
		}
	// 다른거면 잘못 입력하셨습니다가 띈다.
		return 0;

		
	

}
		
	

