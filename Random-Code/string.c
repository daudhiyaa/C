#include <stdio.h>
#include <string.h>
//string implementation
int main(){
	char str[10];
	//scanf("%s", arr);
	scanf("%[^\n]", str);
	printf("-- %s\n", str);

	return 0;
}
