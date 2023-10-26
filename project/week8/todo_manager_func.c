#include <stdio.h>
#define MAX_TASKS 10 // 10���� �������
#define CHAR_NUM 100 // 100���� �������
#include <string.h> 

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����


// ������� ������ �Է¹޾� �����ϱ� ���� �Լ�
void addTask(char task[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", task, (int)sizeof(task)); // �Է¹��� ���� task�� �����
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task); // taskscont ������ ������Ŵ
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task); // ���� ~�� ����Ǿ����ϴ� ���
}

//  �ش� ������ ��Ͽ� �����ϱ� ���� �Լ�
void delTask(int delIndex, int taskCount) {

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}
//  ���� ���� ����� ����ϱ� ���� �Լ�
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() {
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice); // �Է¹��� ���� choice�� ����

		int terminate = 0;
		int delIndex = -1; // �� �� ������ ���� �ε���

		int modifyIndex = -1; // �� �� ������ ���� �ε���
		char ch;

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			taskCount++; // ���� 1�� �Է¹����� addTask �Լ��� ȣ���ѵ� taskCount�� +1�� ������Ŵ
			break;
		case 2:
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n"); // ���� delIndex�� ���� taskCount���� ũ��, 0���� ���ų� �۴ٸ� �� ���� ���
			}
			else {
				delTask(delIndex, taskCount); // �׷��� ������ delTask  �Լ� 
				taskCount -= 1; // taskCount�� - 1 ����
			}
			break;
		case 3:
			printf("�� �� ���\n"); // �� �� ����� ���
			printTask(taskCount); // �Լ� ȣ���� 
			break;
		case 4:
			terminate = 1; // terminate�� 1�� �ʱ�ȭ �� switch�� ��������
			break;
		case 5:
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
			scanf_s("%d", &modifyIndex); // �Է¹��� ���� modifyIndex�� �����
			ch = getchar();
			printf("���ο� �� ���� �Է����ּ���");
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1])); // tasks�� �迭 �ε����� -1���� �װ��� �����
			printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]); // %d�� modifyIndex�� ���� %s�� taksks[modityIndex-1]���� ��Ÿ��
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break; // 1�̸� �� ���� ����� ����
		}
		if (taskCount == 10) {
			printf("�� ���� %d���� �� á���ϴ�.", taskCount);
			break; // taskCount�� 10�̸� ������ ����� ���� 
		}
	}
	return 0;
}