#include <stdio.h>
#define MAX_TASKS 10 // 10으로 상수선언
#define CHAR_NUM 100 // 100으로 상수선언
#include <string.h> 

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수


// 사용자의 할일을 입력받아 저장하기 위한 함수
void addTask(char task[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", task, (int)sizeof(task)); // 입력받은 값이 task에 저장됨
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task); // taskscont 변수를 증가시킴
	printf("할 일 ""%s""가 저장되었습니다\n\n", task); // 할일 ~가 저장되었습니다 출력
}

//  해당 할일을 목록에 삭제하기 위한 함수
void delTask(int delIndex, int taskCount) {

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}
//  현재 할일 목록을 출력하기 위한 함수
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice); // 입력받은 값을 choice에 저장

		int terminate = 0;
		int delIndex = -1; // 할 일 삭제를 위한 인덱스

		int modifyIndex = -1; // 할 일 수정을 위한 인덱스
		char ch;

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			taskCount++; // 만약 1로 입력받으면 addTask 함수를 호출한뒤 taskCount를 +1로 증가시킴
			break;
		case 2:
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n"); // 만약 delIndex의 값이 taskCount보다 크고, 0보다 같거나 작다면 위 문장 출력
			}
			else {
				delTask(delIndex, taskCount); // 그렇지 않으면 delTask  함수 
				taskCount -= 1; // taskCount를 - 1 해줌
			}
			break;
		case 3:
			printf("할 일 목록\n"); // 할 일 목록을 출력
			printTask(taskCount); // 함수 호출함 
			break;
		case 4:
			terminate = 1; // terminate를 1로 초기화 즉 switch문 빠져나감
			break;
		case 5:
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &modifyIndex); // 입력받은 값이 modifyIndex에 저장됨
			ch = getchar();
			printf("새로운 할 일을 입력해주세요");
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1])); // tasks의 배열 인덱스에 -1을해 그곳에 저장됨
			printf("새로운 할 일이 추가되었습니다: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]); // %d는 modifyIndex의 값을 %s는 taksks[modityIndex-1]값을 나타냄
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break; // 1이면 위 문장 출력후 종료
		}
		if (taskCount == 10) {
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break; // taskCount가 10이면 위문장 출력후 멈춤 
		}
	}
	return 0;
}