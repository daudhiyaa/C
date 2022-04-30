/*
print name x until y
number 1 - 9 => print name of the number
number >9 => print odd or even

Sample Input :
2 15

Sample Output :
two
three
four
five
six
seven
eight
nine
even
odd
even
odd
even
odd
*/

#include <stdio.h>

int main() 
{
    int c, b;
    scanf("%d%d", &c, &b);
  	int i;
    int d = b-c+1;
    for(i=0;i<d;i++) {
        if(c==1)
           printf("one\n");
        else if(c==2)
            printf("two\n");
        else if(c==3)
            printf("three\n");
        else if(c==4)
            printf("four\n");
        else if(c==5)
            printf("five\n");
        else if(c==6)
            printf("six\n");
        else if(c==7)
            printf("seven\n");
        else if(c==8)
            printf("eight\n");
        else if(c==9)
            printf("nine\n");
        else {
            if(c%2==0)
            	printf("even\n");
            else
                printf("odd\n");
        }
        c++;
    }
    return 0;
}


