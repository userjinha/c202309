#include  <stdio.h>

int main(void) {
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	// 3,7,3+7 : 각각 %d에 대응하는 인자로, 서식지정자에 순서대로 대체됨
	// int add = 3 + 7;
	// prinft("3 + 7 = %d\n" , add);
	return 0;
}
