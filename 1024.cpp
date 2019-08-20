#include <stdio.h>

int main(void) {
	char array[20];
	scanf("%s", &array);
	for(int i = 0; array[i] != '\0'; i++) {
		printf("\'%c\'\n", array[i]);
	}
	return 0;
}

