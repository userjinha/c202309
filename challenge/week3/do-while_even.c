#include <stdio.h>

main(void) {
	int i = 0;
	do {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello World %d \n", i);
	} while (i < 10);
}