#include <stdio.h>
/*
create a rhombus

sample input : 
5
-1

sample output :   
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

void topTriangle(int);	// prototype function
void bottomTriangle(int); // prototype function

int main(){
	int n, i;
	for(i=0;i>=0;i++) {
		scanf("%d", &n);
		if(n==-1) //-1 for exit program
			return 0;
			
		topTriangle(n);
		bottomTriangle(n);
	}
	return 0;
}

void topTriangle(int x){
	int i, j, k;
	for(i=0;i<x;i++){
		for(j=((x-i-1)*2);j>0;j--){
			printf(" ");
		}
		for(k=0;k<=i*2;k++){
			printf("* ");
		}
		printf("\n");
	}
}

void bottomTriangle(int x){
	int i, j, k;
	for(i=0;i<x;i++){
		printf(" ");
		for(j=0;j<=(i*2);j++){
			printf(" ");
		}
		for(k=((x-i-1)*2)-1;k>0;k--){
			printf("* ");
		}
		printf("\n");
	}
}
