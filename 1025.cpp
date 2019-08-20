#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f;
	scanf("%d", &a);
	b = (a/10000) * 10000;
	c = ((a-b)/1000) * 1000;
	d = ((a-b-c)/100) * 100;
	e = ((a-b-c-d)/10) * 10;
	f = (a-b-c-d-e);
	
	printf("[%d]\n", b);
	printf("[%d]\n", c);
	printf("[%d]\n", d);
	printf("[%d]\n", e);
	printf("[%d]\n", f);

	return 0;
}

