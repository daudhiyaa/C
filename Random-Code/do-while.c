#include <stdio.h>
//do-while implementation

int main(){
    int num = 0;
    do{
        printf("Now the number is %d\n",num);
        printf("Enter a positive integer (-1 for exit ): ");
        scanf("%d", &num);
    } while (num != -1);
    return 0;
}
