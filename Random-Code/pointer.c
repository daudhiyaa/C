// pointer implementation

#include <stdio.h>
int main(){
    int x, y, z;
    int *ptr1, *ptr2;
    x = 5;
    y = 6;

    ptr1 = &x;
    ptr2 = &y;

    z = *ptr1 + *ptr2;
    printf("%d\n", z);
    
    return 0;
}

