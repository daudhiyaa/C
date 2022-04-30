/*
0 0 1 1 2 4 7 .. .. .. 
print the fibo's index using recursion
* note : indexing start from 1

Sample Input :
3
3 6 9

Sample Output :
1 4 24

*/

#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

int fibo(int x){
	if(x==1 || x==2)
		return 0;
	else if(x==3)
		return 1;
	else
		return fibo(x-1) + fibo(x-2) + fibo(x-3);
}

int main(){
	int t, arr[50];
	SC"%d", &t); //testcase
	 
    for(int i=0;i<t;i++) {	
    	SC"%d", &arr[i]); // index row
	}
	for(int i=0;i<t;i++) {	
    	PR"%d ", fibo(arr[i]));
	}		
}
