#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		// i��� �ڽ��� floor�� �ʱ�ȭ �Ѵ�. i�� 0���� ũ
		for (int j = 0; j < floor -i; j++) {
			printf("S");
		}
		// floor-i��ŭ s�� ���
		for (int k = 0; k < i*2-1; k++) {
			printf("*");
		}
		// i*2-1��ŭ *�� ���

		printf("\n");
		// �ٹٲ�
	}
		return 0;


	
}