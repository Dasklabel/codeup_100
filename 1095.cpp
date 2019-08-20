#include <stdio.h>

int main(void) {
	int a, i, j, temp, min, index;
	int array[24] = {};
	scanf("%d", &a);
	
	for(i = 0; i < a; i++) {
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < a; i++) {
		min = 9999;
		for(j = i; j < a; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;	
	}
	
	printf("%d", array[0]);
	
	return 0;
}

