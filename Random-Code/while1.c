#include <stdio.h>
// another while implementation
int main(){
	int x = 0;
	while (x <= 5){
		printf("%3d %3d\n", x, 10-x);
		x++;
	}
}
