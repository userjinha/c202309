#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할일 목록을 저장을 위한 2차원 배열
	int taskCount = 0; // 할 일 수 저장 변수

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용의 입력을 받는 함수

		//  메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 flag
		int delIndex = -1;  // 할 일 삭제를 위한 인덱스 변수
		int changeIndex = -1; // 할 일 수정을 위한 인덱스 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수
		
		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++; // 1을 입력받은면 위 문장이출력되고 할일을 입력받은 뒤 taskCount에서 +1이 됨
			break;
		case 2:
			// 할 일 삭제하는 코드
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n"); // 만약 이 조건이 충족될시 이 문장이 뜨고 다시 메뉴창이 출력됨
			}
			else { // 그렇지 않으면 위 문장이 출력
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 배열간 대입 (=배열에 문자 배열인 문자열의 대입) 이 불가능하기 때문에
				// 문자열 복사 함수로 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1; // taskCount-1로 감가시킴
			}
			break;
		case 3:
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]); // for문을 통해 할일이 출력됨
			} 
			printf("\n");
			break;
		case 4:
			terminate = 1; // 4를 입력받으면 terminate 1로 초기화됨
			break;
		case 5:
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &changeIndex); // 입력받은 값이 modifyIndex에 저장됨
			ch = getchar(); // 할 일 수정시 버퍼를 받기 위한 문자 변수
			printf("새로운 할 일을 입력해주세요");
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1])); // tasks의 배열 인덱스에 -1을해 그곳에 저장됨
			printf("새로운 할 일이 추가되었습니다: %d. %s\n", changeIndex, tasks[changeIndex - 1]); // %d는 modifyIndex의 값을 %s는 taksks[modityIndex-1]값을 나타냄
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n"); // 1~5이외의 숫자 입력시 위 문장이 출력되고 다시 메뉴창이 뜸
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break; // terminate가 1이면 위문장 출력후 멈춰지고 종료됨
		}

		// TODO: 할 일이 다 찼는지 체크하는 코드 작성
		if (taskCount == 10) {
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break; // taskCount가 10이면 위문장 출력후 멈춰지고 종료됨
		}

	}
}
