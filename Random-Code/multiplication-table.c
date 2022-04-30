#include <stdio.h>
// multiplication table 1 - 10
int main(){
	int brs, klm, hasil, a;
	printf("X");
	for(a=1;a<=10;a++) {
		printf("%6d", a);
	}

	for(brs=1;brs<=10;brs++) {
		printf("\n \n%d ", brs);
		for(klm=1;klm<=10;klm++) {
			hasil = brs * klm;
			printf("%5d ", hasil);
		}
	}
	return 0;
}
