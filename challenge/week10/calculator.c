#include <stdio.h>

// void타입의 함수형식을 미리 선언
void summation(double a, double b, double* result);
void subtraction(double a, double b, double* result);
void multiplication(double a, double b, double* result);
void division(double a, double b, double* result);

int main() {
    double a = 2, b = 3;
    double result;

    summation(a, b, &result); // 함수 호출 후 결과를 result변수에 저장
    printf("%.0lf + %.0lf = %.2lf\n", a, b, result); // 결과 출력

    subtraction(a, b, &result); // 함수 호출 후 결과를 result변수에 저장
    printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

    multiplication(a, b, &result); // 함수 호출 후 결과를 result변수에 저장
    printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

    division(a, b, &result); // 함수 호출 후 결과를 result변수에 저장
    printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

    return 0;
}

// 더하기 함수
void summation(double a, double b, double* result) {
    *result = a + b; // 결과를 result포인터를 통해  반환
}

// 빼기 함수
void subtraction(double a, double b, double* result) {
    *result = a - b; // 결과를 result포인터를 통해  반환
} 

// 곱하기 함수
void multiplication(double a, double b, double* result) {
    *result = a * b; // 결과를 result포인터를 통해  반환
}

// 나누기 함수
void division(double a, double b, double* result) {
    *result = a / b; // 결과를 result포인터를 통해  반환
}
