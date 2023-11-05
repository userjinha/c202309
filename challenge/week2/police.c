#include <stdio.h>

int main() {
	// 문자열 배열 변수 선언 및 127자의 이름을 저장 가능
    char name[128];
// 함수를 사용하여 화면에 출력, 사용자로부터 입력받은 정보를 출력
    printf("이름?: ");
// 함수를 사용하여 사용자로부터 정보를 입력받음, %s는 문자열 서식 지정자
    scanf_s("%s", name, sizeof(name));

    // 정수 변수 선언
    int age;
// %d는 정수 서식지정자
    printf("나이?: ");
    scanf_s("%d", &age);

    // 실수 변수 선언
    double weight;
// %lf 실수 서식지정자
    printf("몸무게?: ");
    scanf_s("%lf", &weight);

    // 소수점 변수 선언
    float height;
// %f는 실수를 입력받을 때 사용되는 서식지정자
    printf("키?: ");
    scanf_s("%f", &height);

    // 범죄 명칭을 저장하기 위한 문자열 배열 선언, 최대 511자의 범죄명칭을 저장가능
    char what[512]
	
// printf 함수를 사용하여 화면에 출력, 사용자로부터 입력받은 정보와 범죄자 정보를 출력

    printf("범죄?: ");
    scanf_s("%s", what, sizeof(what));
    
    printf("\n-----범죄자 정보-----\n");
    printf("이름      : %s\n", name);
    printf("나이      : %d\n", age);
    printf("몸무게      : %lf\n", weight);
    printf("키       : %f\n", height);
    printf("범죄      : %s\n", what);


    return 0;
}


