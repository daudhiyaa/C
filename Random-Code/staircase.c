/*
Make a simple staircase using for loop

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

*/

#include <stdio.h>

int main(){
	int num;
	for(int z=0;z<=0;z--) {
		scanf("%d", &num);
		if(num==-1) //-1 for exit program
			return 0;
			
		for(int x=1;x<=num;x++) {
			for(int y=1;y<=x;y++) {
				printf("* ");	
			}	
			printf("\n");
		}
	}	
}
