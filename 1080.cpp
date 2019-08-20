#include <stdio.h>

int main(void) {
	int a;
	int sum = 0;
	int i = 0;
	
	scanf("%d", &a);
	
	while(sum < a) {
		i++;
		sum += i;
	}
	printf("%d", i);
	return 0;
}

