#include <stdio.h>

int main(void) {
	int a, i;
	int array[24] = {};
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++) {
		scanf("%d", &array[i]);
	}
	
	for(i = a; i >= 1; i--) {
		printf("%d ", array[i]);
	}
	
	
	
	return 0;
}


