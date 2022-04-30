#include <stdio.h>
#include <string.h>
// strcpy implementation
int main () {
	char a[] = "Halo";
	char b[10];
	
	// Copy string a to string b
	strcpy(b, a);
	
	printf("%s\n", b);
	return 0;
}
