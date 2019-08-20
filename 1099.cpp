#include <stdio.h>

int main() {
	int array[11][11] = {};
	int i, j;
	int x = 2;
	int y = 2;
	
	for(i = 1; i <= 10; i++) {
		for(j = 1; j <= 10; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	
	while(array[x][y] != 2) {
		array[x][y] = 9;
		if(array[x][y+1] != 1) {
			y += 1;
		} else if(array[x+1][y] != 1) {
			x += 1;
		} else {
			break;
		}
	}
	
	array[x][y] = 9;
	
	for(i = 1; i <= 10; i++) {
		for(j = 1; j <= 10; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
