#include <stdio.h>

int main() {
	char name[128];
	printf("이름?:");

	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이?: ");
	scanf_s("%d", &age);

	double weight;
	printf("몸무게?: ");
	scanf_s("%lf", &weight);

	float height;
	printf("키?: ");
	scanf_s("%f", &height)

	char what[512];
	printf("범죄?: ");
	scanf_s("%s", what, sizeof(what));

	printf("\m-----범죄자 정보-----\n");
	printf("이름      : %s\n", name);
	printf("나이      : %d\n", age);
	printf("몸무게      : %lf\n", weight);
	printf("키       :%f\n", height);
	printf("죄목      : %s\n", what);

	return 0;


}



