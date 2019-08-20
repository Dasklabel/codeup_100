#include <stdio.h>

int main(void) {
	int a;
	int i, sum = 0;
	
	scanf("%d", &a);
	
	for(i = 1; ; i++) {
		sum += i;
		if(sum >= a) {
			break;
		}
	}
	printf("%d", sum);
	return 0;
}

