#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 50

typedef struct {
  char name[50];
  int score;
} Student;

void classifyStudents(Student *students, int numStudents, char target) {
  printf("학생 성적 분류:\n");
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
      printf("%s 학생은 %c 학점을 받았습니다.\n", students[i].name, target);
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
    printf("%s 학생의 순위는 %d 입니다.\n", students[i].name, ranks[i]);
  }
}

int main() {
  int numStudents;
  printf("학생 수를 입력하세요 (최대 %d명): ", STUDENTS);
  scanf_s("%d", &numStudents);
  getchar();  // Enter 키 제거

  if (numStudents <= 0 || numStudents > STUDENTS) {
    printf("유효하지 않은 학생 수입니다. 프로그램을 종료합니다.\n");
    return 1;
  }

  Student students[STUDENTS];

  for (int i = 0; i < numStudents; i++) {
    printf("학생 %d의 이름을 입력하세요: ", i + 1);
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("학생 %d의 성적을 입력하세요: ", i + 1);
    scanf_s("%d", &students[i].score);
    getchar();  // Enter 키 제거
  }

  char target;
  printf("특정 학점(A, B, C, D, F)을 입력하세요: ");
  scanf_s(" %c", &target);

  classifyStudents(students, numStudents, target);

  int sum = sumScores(students, numStudents);
  double average = averageScores(students, numStudents);
  printf("학생들 점수의 총 합은 %d이고, 평균 값은 %.2lf입니다.\n", sum,
         average);

  printRanks(students, numStudents);

  return 0;
}
