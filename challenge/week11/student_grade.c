#include <stdio.h>
#define STUDENTS 5

// �л� ������ �з��ϰ� �׿� ���� ������ ����ϴ� �Լ�
void classifyStudents(int* scores, char target) {
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


		if (target == grade)
		{
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, target);
		} // ���� �Է¹��� ���� grade�� ���ٸ� �� ������ ��µȴ�.
	}
}


// �л� ������ ������ ����� �� ��ȯ�ϴ� �Լ�
int sumScores(int *scores) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

// �л� ������ ����� ����� �� ��ȯ�ϴ� �Լ�
double averageScores(int *scores) {
	int sum = 0;
	double average;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;
	return average;
}

// �л� ������ ���� ������ ����ϰ� ����ϴ� �Լ�
void printRanks(int *scores) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; // ������ �ű�� ���� ��� �ϴ� 1�� �ʱ�ȭ
	}
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				ranks[i]++; // ���� ���Ͽ� �� ũ�ٸ� ���� ����
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, *(ranks+i)); // ���� ���
	}
}

int main() {
	int scores[STUDENTS]; // �л� ������ �����ϴ� �迭

    
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i+1);// i+1�� *(scores+i)
		scanf_s("%d", scores+i); 
	}

	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF); // ���� ����

	char target;
	printf("Ư�� ����(A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1); // �Է¹��� ���� Ư������ ������ ����

	classifyStudents(scores, target); // �� �Լ��� ������ ���� ��ȯ

	int sum = sumScores(scores); //���� �ް� ����
	double average = averageScores(scores); // average ���� �ް� ����
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %.2lf�Դϴ�.\n", sum, average);

	printRanks(scores); // ���� ��ȯ

	return 0;
}
