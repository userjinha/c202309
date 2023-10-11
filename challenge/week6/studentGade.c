#include <stdio.h>
#define STUDENTS 5

// 학생 성적을 분류하고 그에 따른 학점을 출력하는 함수
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
		
		if (targetGrade == grade)
		{
			printf("%d 학생은 %c 학점을 받았습니다.\n", i + 1, targetGrade);
		} // 만약 입력받은 값과 grade가 같다면 이 문장이 출력된다.
	}
}

// 학생 성적의 총합을 계산한 뒤 반환하는 함수
int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

// 학생 성적의 평균을 계산한 뒤 반환하는 함수
double averageScores(int scores[]) {
	int sum = 0;
	double average;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;
	return average;
}

// 학생 성적에 대한 순위를 계산하고 출력하는 함수
void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; // 순위를 매기기 위해 모두 일단 1로 초기화
	}
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				ranks[i]++; // 만약 비교하여 더 크다면 순위 증감
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, ranks[i]); // 문장 출력
	}
}

int main() {
	int scores[STUDENTS]; // 학생 점수를 저장하는 배열

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF); // 버퍼 비우기

	char target;
	printf("특정 학점(A, B, C, D, F)을 입력하시오: "); 
	scanf_s(" %c", &target); // 입력받은 값을 특정학점 변수에 저장

	classifyStudents(scores, target); // 이 함수의 변수에 값을 반환

	int sum = sumScores(scores); //값을 받고 저장
	double average = averageScores(scores); // average 값을 받고 저장
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %.2lf입니다.\n", sum, average);

	printRanks(scores); // 값을 반환

	return 0;
}
