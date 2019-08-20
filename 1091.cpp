#include <stdio.h>

int main(void) {
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	
	for(int i = 0; i < n-1; i++) {
		a *= m;
		a += d;
	}
	printf("%d", a);
		
	
	
	return 0;
}


