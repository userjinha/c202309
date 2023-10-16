#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2 // 상수 매크로 선언

char names[NUMPEOPLE][10]; // 전역 변수 선언, 각이름은 최대 9글자로 제안
char cities[NUMCITY][10];

void calculateTravelDays(); // 함수 프로토타입 선언, 함수가 어떤 인수도 받지 않도록 선언되어 있음

// main함수 함수의 프로그램 시작점
int main() {
	// 사용자로부터 도시 이름 입력받기
	printf("%d의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	// 사용자로부터 사람 이름 받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}
	// 함수 호출(여행일수를 계산하는 함수를 호출)
	calculateTravelDays(names);

	return 0;
}

// cal함수 :이 함수는 각 도시에서 여행자가 보낸 일 수를 입력받고, 각 도시의 총 일수와 평균 일 수를 계산하고 출력
void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ",cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j=0; j<NUMPEOPLE; j++){
			totalDays += travelDays[i][j];
	}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);
	


	

}
}
