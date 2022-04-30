/*
matrix and its tranpose

Sample Input :
3 3
1 2 3
9 8 2
0 9 4.3

Sample Output :
1.0 2.0 3.0
9.0 8.0 2.0
0.0 9.0 4.3

1.0 9.0 0.0
2.0 8.0 9.0
3.0 2.0 4.3

*/

#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &m, &n);
	
	double arr[m][n]; // matrix
	
	int i, j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%lf", &arr[i][j]);
		}
	}
	
	printf("\n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("%.1lf ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("%.1lf ", arr[j][i]);
		}
		printf("\n");
	}
}
