#include <stdio.h>

int main(void) {
	int a, b, c;
	int day = 1;
	scanf("%d %d %d", &a, &b, &c);
	
	for(int i = 0; ; i++) {
		day += 1;
		if(day % a == 0 && day % b == 0 && day % c == 0) {
			printf("%d", day);
			break;
		}
	}
	
	
	return 0;
}

