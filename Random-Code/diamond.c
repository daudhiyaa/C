#include <stdio.h>
/*
create a diamond

sample input : 
7
-1

sample output :   
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

void topTriangle(int);	// prototype function
void bottomTriangle(int); // prototype function

int main(){
	int n;
	for(int i=0;i>=0;i++) { //infinite loop
		scanf("%d", &n);
		if(n==-1) //-1 for exit program
			return 0;
			
		topTriangle(n);
		bottomTriangle(n-1);
	}
}

void topTriangle(int x){
	for(int i=0;i<x;i++) {
		for(int j=0;j<x-i-1;j++) {
			printf(" ");
		}
		for(int k=0;k<i+1;k++) {
			printf("* ");
		}
		printf("\n");
	}
}

void bottomTriangle(int x) {
	int i, j, k;
	for(int i=0;i<x;i++) {
		printf(" ");
		for(int j=0;j<i;j++) {
			printf(" ");
		}
		for(int k=0;k<x-i;k++) {
			printf("* ");
		}
		printf("\n");
	}
}
