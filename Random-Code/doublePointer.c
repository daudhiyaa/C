#include <stdio.h>
//double pointer implementation

int main(void){
    int var = 23;
    int *ptr = &var;
    int **dbPtr = &ptr;

    printf("%d\t%d", *ptr, **dbPtr);
    
    return 0;
}
