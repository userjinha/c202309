#include <stdio.h>

int main(void) {
	int i = 0;
	while (i < 10) {

		i++;
		if (i % 2 == 0)

		{
			continue;

		}
		printf("Hello World %d \n", i);
	}
}