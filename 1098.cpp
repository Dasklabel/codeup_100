#include <stdio.h>

int main() {
	int w, h, n, l, d, x, y, i ,j, k, m;
	int array[101][101] = {};
	
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		for(j = 1; j <= w; j++) {
			for(k = 1; k <= h; k++) {
				for(m = 1; m <= l; m++) {
					if(d == 0) {
						if(array[x][y+m-1] == 0) {
							array[x][y+m-1] = 1;
						}
					}
					if(d == 1) {
						if(array[x+m-1][y] == 0) {
							array[x+m-1][y] = 1;
						}
					}
				}
			}
		}
	}
	
	for(i = 1; i <= h; i++) {
		for(j = 1; j <= w; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
