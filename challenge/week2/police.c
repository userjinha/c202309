#include <stdio.h>

int main() {
	char name[128];
	printf("�̸�?:");

	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����?: ");
	scanf_s("%d", &age);

	double weight;
	printf("������?: ");
	scanf_s("%lf", &weight);

	float height;
	printf("Ű?: ");
	scanf_s("%f", &height)

	char what[512];
	printf("����?: ");
	scanf_s("%s", what, sizeof(what));

	printf("\m-----������ ����-----\n");
	printf("�̸�      : %s\n", name);
	printf("����      : %d\n", age);
	printf("������      : %lf\n", weight);
	printf("Ű       :%f\n", height);
	printf("�˸�      : %s\n", what);

	return 0;


}



