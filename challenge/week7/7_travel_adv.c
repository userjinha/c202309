#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {
	// ����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d�� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	// ����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}
	// �Լ� ȣ��
	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	// �� ���ÿ��� �� �礿���� ���� �ϼ� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	
	// �� ���ÿ��� ���� �� �ϼ��� ����ϱ� ���� ���
	int getSum(int numArray[], int length) {
		int totalDays = 0;
		for (int i = 0; i < length; i++) {
			totalDays += numArray[i];
		}
		return 0;
	}

	double getAverage(int numArray[], int length) {
		int totalDays = 0;
		for (int i = 0; i < length; i++) {
			totaldays += numArray[i];
		}
		double averageDays = (double dayArray[], int length){
			double maxDay = 0;
		for (int i = 0; i < length; i++) {
			if (dayArray[i] > maxDay) {
				maxDay = dayArray[i];
				maxDayIndex = i;
			}
		}
		printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��ոӹ���: %.2f)]\n", cities[maxDayIndex], maxDay);
		}
	}
	
	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ� : %d ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);





	}
}