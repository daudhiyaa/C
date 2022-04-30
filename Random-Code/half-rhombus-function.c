/*
Make a simple half rhombus using function

Sample Input :
7
-1

Sample Output :
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>

void topTriangle(int x){
	int i, j;
	for(i=1;i<=x;i++) {
		for(j=1;j<=i;j++) {
			printf("* ");
		}
		printf("\n");
	}
}

void bottomTriangle(int x){
	int i, j;
	for(i=x;i>=0;i--) {
		for(j=1;j<=i-1;j++) {
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	int n, i;
	for(i=0;i<=0;i--) {
		scanf("%d", &n);
		if(n==-1) //-1 for exit program
			return 0;
		topTriangle(n);
		bottomTriangle(n);
	}
}
