/*
Check the prime number

Sample Input :
3 
4
-1

Sample Output :
3 is a primary number
4 isn't a primary number
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	for(int i=0;i<=0;i--) {
		int input, num;
		bool check = true;
		scanf("%d", &input); //input a number
		if(input==-1) //-1 for exit program
			return 0;
		else if(input<2) 
			printf("Input must bigger than one\n");
		else {
			if(input==2) {
				printf("%d is a prime number\n", input);
			}
			else {
				int akar = sqrt(input);
				for(num=2;num<=akar;num++) {
					// condition if the input can be divided by a number other than itself
					if(input%num == 0) {
						check = false;
						break;
					}
				}
				   
				if(!check)
					printf("%d isn't a prime number\n", input);
				else
					printf("%d is a prime number\n", input);
			}
		}
	}
}
