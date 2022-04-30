/*
Make a simple half rhombus using recursion

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
	for(int i=1;i<=x;i++)
		printf("* ");
	printf("\n");
}

void bottomTriangle(int x){
	for(int i=1;i<=x;i++)
		printf("* ");
	printf("\n");
}

int plus(int p, int x){
	if(p==x)
		return 0;
	topTriangle(p);
	plus(p+1, x);
}

int minus(int x){
	if(x==0)
		return 0;
	bottomTriangle(x);
	minus(x-1);
}

int main(){
	int n, o = 1;
	for(int i=0;i<=0;i--){
		scanf("%d", &n);
		if(n==-1) //-1 for exit program
			return 0;
		plus(o, n);
		minus(n);
	}
}
