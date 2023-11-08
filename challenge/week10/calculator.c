#include <stdio.h>

// voidŸ���� �Լ������� �̸� ����
void summation(double a, double b, double* result);
void subtraction(double a, double b, double* result);
void multiplication(double a, double b, double* result);
void division(double a, double b, double* result);

int main() {
    double a = 2, b = 3;
    double result;

    summation(a, b, &result); // �Լ� ȣ�� �� ����� result������ ����
    printf("%.0lf + %.0lf = %.2lf\n", a, b, result); // ��� ���

    subtraction(a, b, &result); // �Լ� ȣ�� �� ����� result������ ����
    printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

    multiplication(a, b, &result); // �Լ� ȣ�� �� ����� result������ ����
    printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

    division(a, b, &result); // �Լ� ȣ�� �� ����� result������ ����
    printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

    return 0;
}

// ���ϱ� �Լ�
void summation(double a, double b, double* result) {
    *result = a + b; // ����� result�����͸� ����  ��ȯ
}

// ���� �Լ�
void subtraction(double a, double b, double* result) {
    *result = a - b; // ����� result�����͸� ����  ��ȯ
} 

// ���ϱ� �Լ�
void multiplication(double a, double b, double* result) {
    *result = a * b; // ����� result�����͸� ����  ��ȯ
}

// ������ �Լ�
void division(double a, double b, double* result) {
    *result = a / b; // ����� result�����͸� ����  ��ȯ
}
