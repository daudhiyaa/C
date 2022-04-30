#include <stdio.h>
//nested for implementation
int main(){
    int i, j;
    // init;condition;increment
    for (i = 1; i < 5 ; i++) {
		for (j = 0; j < i ; j++) {
			printf("%d ", j);
		}
		printf("%d", i);
    }
    return 0;
}
