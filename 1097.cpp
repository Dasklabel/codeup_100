#include <stdio.h>

int main() {
	int n, x, y, i, j;
	int array[20][20] = {};
	
	for(i = 1; i <= 19; i++) {
		for(j = 1; j <= 19; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	
	scanf("%d", &n);
	
	for(i=1 ; i<=n ; i++)
    {
        scanf("%d %d",&x, &y);
        for(j=1 ; j<=19 ; j++)
        {
            if(array[x][j] == 0) {
            	array[x][j] = 1;
			}
            else {
            	array[x][j] = 0;
			} 
        }
 
        for(j=1 ; j<=19 ; j++)
        {
            if(array[j][y] == 0) {
            	array[j][y] = 1;
			} 
            else {
            	array[j][y] = 0;
			}
        }
    }

	for(i = 1; i <= 19; i++) {
		for(j = 1; j <= 19; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
