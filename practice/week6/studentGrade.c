#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) // 학생들의 성적을 저장하는 정수 배열,사용자가 입력한 특정학점을 나타내는 문자 
{
    printf("학생 성적 분류:\n");
    char grade = ' '; // 학점을 저장할 변수
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
        if (targetGrade == grade) // targetgrade와 학생의 학점이 일치하면 문장출력
        {
            printf("%d 학생은 %c 학점을 받았습니다.\n", i + 1, targetGrade);
        }
    }
}

int main() {
    int scores[STUDENTS]; // 배열을 선언

    for (int i = 0; i < STUDENTS; i++) {
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf("%d", &scores[i]); // for루프를 사용하여 학생의 성적을  입력받음
    } 

    char target; // 사용자로부터 특정 학점을 입력받을때, 이 변수 사용
    printf("특정 학점 (A, B, C, D, F)를 입력하시오: ");
    scanf(" %c", &target); // 공백 문자를 추가하여 이전 입력의 엔터 키를 처리합니다

    classifyStudents(scores, target); // 함수 호출

    return 0;
}

