/*
0 3 3 6 9 15 24 .. ..
print the fibo's row using function and loop

Sample Input :
7

Sample Output :
0 3 3 6 9 15 24

*/

#include <stdio.h>
#define PR (void)printf(
#define SC (void)scanf(

void fibo(int n){
	int i, hasil;
	if(n==1) PR"0");
	else {
    	PR"0 3 ");
    	int a = 0, b = 3;
    	for(i=0;i<n-2;i++) {	
    		hasil = a + b;
    		a = b;
    		b = hasil;
    		PR"%d ", hasil);
		}
	}
}

int main(){
    int x;
    SC"%d", &x);
    fibo(x);
	return 0;
}
