#include <stdio.h>

int main(void) {
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	
	for(int i = 1; i <= a; i++) {
		for(int j = 1; j <= b; j++) {
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}

