#include <stdio.h>
// factorial (max = 170)
// * note : maybe the result true cause using double data-type

double factorial(int x) {
	int n;
	double result = 1;

	for(n = x; n >= 1; n--) {
		result *= n;
	}
	printf("%.0lf\n", result);
}

int main(){
	int num, i;
	for(i=1;i>0;i++) {
		scanf("%d", &num);
		if(num==-1) break;
		factorial(num);	
	}
	return 0;
}

