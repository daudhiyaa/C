// phi iteration
#include <stdio.h>

int main(){
	int a, b, modulo;
	double c = 0, d;

	scanf("%d", &a);
	
	modulo = a % 2;
	for(b=0;b<a;b++) {
		c = (a*2) + 1;
		if(modulo == 1)
		 	c = 0 - c;
		d = d + (1/c);
	}
	printf("Hasil pi dengan %d iterasi adalah %lf", a, d*4);
	
	return 0;
}
