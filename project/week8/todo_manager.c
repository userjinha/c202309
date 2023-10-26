#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
	int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� flag
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����
		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++; // ���� 1�� �Է¹����� �� ������ ��µǰ� �Է¹��� ���� ������ �� taskCount�� +1�� ������Ŵ
			break;
		case 2:
			// �� �� �����ϴ� �ڵ� ��� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n"); // ���� �� ������ �����ɽ� �� ������ �� �ٽ� �޴� ��µ�
			}
			else { // �׷��� ������ �� ������ ���
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// �迭�� ���� (=�迭�� ���� �迭�� ���ڿ��� ����) �� �Ұ����ϱ� ������
				// ���ڿ� ���� �Լ��� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1; // taskCount-1�� ������Ŵ
			}
			break;
		case 3:
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]); // for���� ���� ���� ��� ���
			} 
			printf("\n");
			break;
		case 4:
			terminate = 1; // 4�� �Է¹����� terminate�� 1�� �����
			break;
		case 5:
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
			scanf_s("%d", &changeIndex); // �Է¹��� ���� modifyIndex�� �����
			ch = getchar(); // �� �� ������ ���۸� �ޱ� ���� ���� ����
			printf("���ο� �� ���� �Է����ּ���");
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1])); // tasks�� �迭 �ε����� -1���� �װ��� �����
			printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", changeIndex, tasks[changeIndex - 1]); // %d�� modifyIndex�� ���� %s�� taksks[modityIndex-1]���� ��Ÿ��
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break; // terminate�� 1�̸� ������ ����� �������� �����
		}

		// TODO: �� ���� �� á���� üũ�ϴ� �ڵ� �ۼ�
		if (taskCount == 10) {
			printf("�� ���� %d���� �� á���ϴ�.", taskCount);
			break; // taskCount�� 10�̸� ������ ����� ���� 
		}

	}
}