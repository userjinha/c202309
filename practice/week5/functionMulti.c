#include <stdio.h>

int multiF(int value);

void main() {
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}

int multiF(int value)
{
	int i;
		int f = 1;
	for (i = 1; i <= value; i = i + 1)
	{
		 f= f * i;
		 
	}
	return f;
}

