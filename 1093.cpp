#include <stdio.h>

int main(void) {
	int a, i, t;
	int array[24] = {};
	scanf("%d", &a);
	
	for(i = 0; i < a; i++) {
		scanf("%d", &t);
		array[t] += 1;
	}
	
	for(i = 1; i <= 23; i++) {
		printf("%d ", array[i]);
	}
	
	
	
	return 0;
}

