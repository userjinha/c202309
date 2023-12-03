#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 50

typedef struct {
  char name[50];
  int score;
} Student;

void classifyStudents(Student *students, int numStudents, char target) {
  printf("�л� ���� �з�:\n");
  char grade = ' ';
  for (int i = 0; i < numStudents; i++) {
    if (students[i].score >= 90) {
      grade = 'A';
    } else if (students[i].score >= 80) {
      grade = 'B';
    } else if (students[i].score >= 70) {
      grade = 'C';
    } else if (students[i].score >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }

    if (target == grade) {
      printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, target);
    }
  }
}

int sumScores(Student *students, int numStudents) {
  int sum = 0;
  for (int i = 0; i < numStudents; i++) {
    sum += students[i].score;
  }
  return sum;
}

double averageScores(Student *students, int numStudents) {
  int sum = sumScores(students, numStudents);
  return (double)sum / numStudents;
}

void printRanks(Student *students, int numStudents) {
  int ranks[STUDENTS];
  for (int i = 0; i < numStudents; i++) {
    ranks[i] = 1;
  }
  for (int i = 0; i < numStudents; i++) {
    for (int j = 0; j < numStudents; j++) {
      if (students[i].score < students[j].score) {
        ranks[i]++;
      }
    }
    printf("%s �л��� ������ %d �Դϴ�.\n", students[i].name, ranks[i]);
  }
}

int main() {
  int numStudents;
  printf("�л� ���� �Է��ϼ��� (�ִ� %d��): ", STUDENTS);
  scanf_s("%d", &numStudents);
  getchar();  // Enter Ű ����

  if (numStudents <= 0 || numStudents > STUDENTS) {
    printf("��ȿ���� ���� �л� ���Դϴ�. ���α׷��� �����մϴ�.\n");
    return 1;
  }

  Student students[STUDENTS];

  for (int i = 0; i < numStudents; i++) {
    printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
    scanf_s("%d", &students[i].score);
    getchar();  // Enter Ű ����
  }

  char target;
  printf("Ư�� ����(A, B, C, D, F)�� �Է��ϼ���: ");
  scanf_s(" %c", &target);

  classifyStudents(students, numStudents, target);

  int sum = sumScores(students, numStudents);
  double average = averageScores(students, numStudents);
  printf("�л��� ������ �� ���� %d�̰�, ��� ���� %.2lf�Դϴ�.\n", sum,
         average);

  printRanks(students, numStudents);

  return 0;
}
