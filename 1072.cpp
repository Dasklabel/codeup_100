#include <stdio.h>

int main(void) {
	int n, a;
	scanf("%d", &n);
	reload:
	scanf("%d", &a);
	printf("%d\n", a);
	if (--n != 0) {
		goto reload;
	}
	return 0;
}

