// check palindrome using pointer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char input[100];
	scanf("%[^\n]", input);
	
	short i, len = strlen(input), flag = 0;
	char *R = &input[len-1];
	
	for(i=0;i<len/2;i++){
		if(*R == input[i])
			flag++;
		R--;
	}
	
	if(flag==len/2)
		printf("palindrom\n");
	else
		printf("no palind\n");
}
