#include <stdio.h>
#define STUDENTS 5

// 학생성적을 분류하고 그에 따른 점수를 출력함
void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

// 입력받은 값을 계산한다음 sum 값을 메인함수에 반환
int sumScores(int scores[]) {

	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
		

	}
	return sum;
}

// 입력받은 값을 계산한다음 average 값을 메인함수에 반환
double averageScores(int scores[]) {
	int sum = 0;
	double average;
	for(int i =0; i<STUDENTS; i++){
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;
	return average;
}

// 입력받은 값에 순위를 매긴다음 문장 출력
void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;
	}
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; i < STUDENTS; i++) {
			if (scores[i] < scores[j]) {
				ranks[i]++;
			}
		}
		printf("%d 학생의 순위는 %d 입니다.", i + 1, ranks[i]);
	}
	


}

int main() {
	int scores[STUDENTS]; //학생 점수의 배열을 초기화

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1); // 문장 출력
		scanf_s("%d", &scores[i]); //입력받은 값을 배열에 저장
	}

	char ch = getchar(); //버퍼 임시 저장 변수. 엔터 지우기 위해

	char target;// 특정 점수의 값 저장을 위한 변수 선언
	printf("특정 점수(A, B, C, D, F)를 입력하시오:");
	scanf_S("%c", &target, 1);

	classifystudents(scores, target); // 값을 함수에 반환
	

	int sum = sumScores(scores); // 반환 받은 값을 저장
	double average = averageScores(scores); // 반환 받을 값을 저장
	pirntf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average); // 문장 출력

	printfRanks(scores); // 값을 함수에 반환

	return 0;
}
