#include <stdio.h>
#include <stdbool.h>
// check anagram using pointer

bool check_anagram(char a[], char b[]){
    short first[100] = {0}, second[100] = {0},
		c = 0;
//	while (a[c] != '\0') {
//	   first[a[c]-'a']++;
//	   c++;
//	}
    while(*(a+c)!='\0'){
	   	(*(first+(*(a+c)-'a')))++;  
	    c++;
	}
    c = 0;
    while (*(b+c)!='\0'){
    	(*(second+(*(b+c)-'a')))++;
       	c++;
    }
    for(c=0;c<100;c++){
       if (first[c] != second[c])
            return false;
    }
    return true;
}

int main(){
    char a[100], b[100];
    short flag = 0;

    printf("Enter first string : ");
    scanf("%[^\n]", a);
    printf("Enter second string : ");
    getchar();
    scanf("%[^\n]", b);

    flag = check_anagram(a, b);
    if (flag)
        printf("\"%s\" dan \"%s\" merupakan anagrams.", a, b);
    else printf("\"%s\" dan \"%s\" bukan anagrams.", a, b);
}
