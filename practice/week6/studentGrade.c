#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
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
			printf("%d �л��� %c������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[], int sumScores ) {
	
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
		printf("�л��� ������ �� ���� %d�̰�, ", sum);

	}

}

double averageScores(int scores[], double average) {
	int sum = 0;
	int num = STUDENTS;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];

		double average;
		average = (double)sum / (double)num;
		printf("��� ���� %.lf�Դϴ�.");

	}

}

void printRanks(int scores[]) {
	for (int i = 1; i < STUDENTS; i++) {
		printf("%d �л��� ������ ", i);
		
		for(int j=0; j)
	}
	


}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); //���� �ӽ� ���� ����. ���� ����� ����

	char target;
	printf("Ư�� ����(A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_S("%c", &target, 1);

	classifystudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	pirntf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printfRanks(scores);

	return 0;
}