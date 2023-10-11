#include <stdio.h>
#define STUDENTS 5

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

int sumScores(int scores[], int sumScores ) {
	
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
		printf("학생들 점수의 총 합은 %d이고, ", sum);

	}

}

double averageScores(int scores[], double average) {
	int sum = 0;
	int num = STUDENTS;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];

		double average;
		average = (double)sum / (double)num;
		printf("평균 값은 %.lf입니다.");

	}

}

void printRanks(int scores[]) {
	for (int i = 1; i < STUDENTS; i++) {
		printf("%d 학생의 순위는 ", i);
		
		for(int j=0; j)
	}
	


}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //버퍼 임시 저장 변수. 엔터 지우기 위해

	char target;
	printf("특정 점수(A, B, C, D, F)를 입력하시오:");
	scanf_S("%c", &target, 1);

	classifystudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	pirntf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	printfRanks(scores);

	return 0;
}
