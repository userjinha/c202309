#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentResults(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]);
void printSubjectResults(double studentScores[SUBJECTS][STUDENTS], char subjectNames[SUBJECTS][CHARNUM]);

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);

	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d��° �л��� �̸��� �Է��ϼ���:", i + 1);
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}


	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s�� ����: ", studentNames[i]);
		for (int j = 0; j < SUBJECTS; j++) {
			scanf_s("%lf", &studentScores[i][j]);
		}
	}

    printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");


	// TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);

	printStudentResults(studentScores, studentNames);

	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");


	// TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���	
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);

	printSubjectResults(studentScores, subjectNames);


	printf("���α׷��� �����մϴ�. ");
	return 0;
}

void printStudentResults(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]) {
	for (int i = 0; i < STUDENTS; i++) {
		double hap = 0;
		for (int j = 0; j < SUBJECTS; j++) {
			hap += studentScores[i][j];
		}
		double average = hap / SUBJECTS;
		printf("%s�� ��� ����: %.2lf\n", studentNames[i], average);
	}
}

void printSubjectResults(double studentScores[SUBJECTS][STUDENTS], char subjectNames[SUBJECTS][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) {
		double subhap = 0;
		for (int j = 0; j < STUDENTS; j++) {
			subhap += studentScores[i][j];
		}
		double subaverage = subhap / STUDENTS;
		printf("\n%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subaverage);
	}
}