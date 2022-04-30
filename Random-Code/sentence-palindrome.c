// check a sentence that palindrome or not

#include <stdio.h>
#include <string.h>

typedef char String[100];

int cek(String input, int i, int j){
  	int k = j/2;
	if (j==k) {
	    printf("palindrome\n");
	    return 1;
  	} 
  	else if(input[i] != input[j]) {
	    printf("not a palindrome\n");
	    return 0;
  	} 
	else
		return cek(input, i+1, j-1);
}

void main(){
	printf("Enter a sentence : ");
	String input;
	scanf("%[^\n]", input);
	cek(input, 0, strlen(input)-1);
}
